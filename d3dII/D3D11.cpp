#include "D3D11.h"

HWND g_Hwnd = nullptr;
UWorld* GWorld = nullptr;
float WndWidth = 0;
float WndHeight = 0;
static ID3D11Device* g_pd3dDevice = nullptr;
static ID3D11DeviceContext* g_pd3dDeviceContext = nullptr;
static IDXGISwapChain* g_pSwapChain = nullptr;
static ID3D11RenderTargetView* g_mainRenderTargetView = nullptr;
DWORD64* pSwapVtble = nullptr;
WndProc oldWndProc = nullptr;
Present oldPresent = nullptr;
pResizeBuffers oldResizeBuffers = nullptr;

static bool bIsInit = FALSE;
static int nFilterTimes = 0;
static bool bAutoAim = FALSE;
static bool bRaderOn = FALSE;
static bool bShowCivilian = FALSE;
static bool bShowSuspect = FALSE;
static float fSelfSpeedBoost = 1.0f;
static float fWeaponSpeedBoost = 1.0f;
static bool bReticleOn = FALSE;
static bool bReduceRecoil = FALSE;
static bool bImmortality = FALSE;
static bool bShowAmmo = FALSE;
static bool bOneHitKill = FALSE;
static bool bUnlimitedAmmo = FALSE;

std::unordered_map<std::string, std::vector<std::string>> NameSplitDict;
std::vector<Character> SuspectList;
std::set<ACyberneticCharacter*> SuspectSet;
std::vector<Character> CivilianList;
std::set<ACyberneticCharacter*> CivilianSet;
ABaseMagazineWeapon* PrimaryWeapon = nullptr;
ABaseMagazineWeapon* SecondaryWeapon = nullptr;

auto IgnoreBones = new FName[512];
TArray<FName> DamageExcludedBones;

HRESULT STDMETHODCALLTYPE MyResizeBuffers(IDXGISwapChain* This, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
    g_pd3dDevice->Release();
    g_pd3dDevice = nullptr;
    g_mainRenderTargetView->Release();
    g_mainRenderTargetView = nullptr;
    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();

    UnloadHook((LPVOID*)&oldPresent, MyPresent);
    LoadHook((LPVOID*)&oldPresent, ImguiInit);

    return oldResizeBuffers(This, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

HRESULT STDMETHODCALLTYPE MyPresent(IDXGISwapChain* This, UINT SyncInterval, UINT Flags)
{
    if (!GWorld->OwningGameInstance || !GWorld->OwningGameInstance->LocalPlayers.Data[0] || !GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController)
    {
        return oldPresent(This, SyncInterval, Flags);
    }

    // std::vector<RadarDot> RadarDots;

    FVector AutoAimTarget{ 0,0,0 };

    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui::SetNextWindowPos(ImVec2(0, 0), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(ImVec2(400, 300));
    ImGui::Begin("Ready Or Not Cheat.");
    ImGui::Text("Average %.3f ms/frame (%.1f FPS)", 1000.0f / io.Framerate, io.Framerate);
    ImGui::Columns(2, NULL, true);
    ImGui::Checkbox("Auto Aim (ALT)", &bAutoAim);
    ImGui::Checkbox("Show Civilian", &bShowCivilian);
    ImGui::Checkbox("Reticle On", &bReticleOn);
    ImGui::Checkbox("Show Ammo", &bShowAmmo);
    ImGui::Checkbox("Unlimited Ammo", &bUnlimitedAmmo);
    ImGui::NextColumn();
    ImGui::Checkbox("Reduce Recoil", &bReduceRecoil);
    ImGui::Checkbox("Show Suspect", &bShowSuspect);
    ImGui::Checkbox("Immortality", &bImmortality);
    ImGui::Checkbox("One-Hit Kill", &bOneHitKill);
    ImGui::Columns(1);
    ImGui::SliderFloat("Self Speed Boost", &fSelfSpeedBoost, 0.0f, 10.0f);
    ImGui::SliderFloat("Weapon Speed Boost", &fWeaponSpeedBoost, 0.0f, 10.0f);

    AActor* SelfPlayer = GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController->AcknowledgedPawn;
    auto CyberneticSelf = reinterpret_cast<ACyberneticCharacter*>(SelfPlayer);
    int BoneNumber = CyberneticSelf->Mesh->ComponentSpaceTransformsArray[0].Count;
  

    if (nFilterTimes <= 72)
    {
        
        for (auto k = 0; k < BoneNumber; ++k)
        {
            IgnoreBones[k] = CyberneticSelf->Mesh->SkeletalMesh->RefSkeleton.RawRefBoneInfo.Data[k].Name;
        }
        
        DamageExcludedBones.Max = BoneNumber;
        DamageExcludedBones.Count = BoneNumber;
        DamageExcludedBones.Data = IgnoreBones;
        
        for (auto i = 0; i < GWorld->Levels.Count; ++i)
        {
            if (!GWorld->Levels.Data[i]) continue;

            for (auto j = 0; j < GWorld->Levels.Data[i]->Actors.Count; ++j)
            {
                AActor* _actor = GWorld->Levels.Data[i]->Actors.Data[j];
                if (!_actor || !_actor->RootComponent || _actor->Instigator == SelfPlayer) continue;

                std::string ActorName = _actor->GetName();
                if (NameSplitDict.find(ActorName) == NameSplitDict.end())
                {
                    NameSplitDict.insert({ ActorName, split_string(ActorName, '_') });
                    continue;
                }

                auto& NameSplit = NameSplitDict[ActorName];

                if (NameSplit[0] == "CyberneticsSuspect")
                {
                    auto _suspect = reinterpret_cast<ACyberneticCharacter*>(_actor);
                    if (SuspectSet.find(_suspect) == SuspectSet.end())
                    {
                        SuspectList.emplace_back(Character(_suspect));
                        SuspectSet.insert(_suspect);
                    }

                }
                else if (NameSplit[0] == "Cybernetics" && NameSplit[1] == "Civilian")
                {
                    auto _civilian = reinterpret_cast<ACyberneticCharacter*>(_actor);
                    if (CivilianSet.find(_civilian) == CivilianSet.end())
                    {
                        CivilianList.emplace_back(Character(_civilian));
                        CivilianSet.insert(_civilian);
                    }

                }
                else if (_actor->Owner == SelfPlayer)
                {
                    if (NameSplit[0] == "Primary")
                    {
                        PrimaryWeapon = reinterpret_cast<ABaseMagazineWeapon*>(_actor);
                    }
                    else if (NameSplit[0] == "Secondary")
                    {
                        SecondaryWeapon = reinterpret_cast<ABaseMagazineWeapon*>(_actor);
                    }
                }
            }
        }
        nFilterTimes += 1;
    }

    if (bReticleOn && !GetAsyncKeyState(VK_RBUTTON))
    {
        DrawReticle(WndWidth, WndHeight);
    }

    if (bShowCivilian && !CivilianList.empty())
    {
        HandleCharacter(CivilianList, SelfPlayer, { 0,0,255 });
    }

    if (bShowSuspect && !SuspectList.empty())
    {
        HandleCharacter(SuspectList, SelfPlayer, { 255,0,0 });
    }

    //if (bRaderOn)
    //{
    //    DrawRadar(
    //        WndWidth,
    //        WndHeight,
    //        SelfPlayer,
    //        GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController->PlayerCameraManager->CameraCachePrivate,
    //        RadarDots,
    //        90.0f
    //    );
    //}

    if (fWeaponSpeedBoost != 1.0f)
    {
        WeaponSpeedUp(PrimaryWeapon, SecondaryWeapon, fWeaponSpeedBoost);
    }

    if (fSelfSpeedBoost != 1.0f)
    {
        SelfSpeedUp(SelfPlayer, fSelfSpeedBoost);
    }

    if (bAutoAim && GetAsyncKeyState(VK_LMENU))
    {
        FindTarget(SuspectList, bShowSuspect, SelfPlayer, AutoAimTarget);
        AutoAim(&AutoAimTarget, GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController);
    }

    if (bShowAmmo)
    {
        ShowAmmo(WndWidth, WndHeight, PrimaryWeapon, SecondaryWeapon);
    }

    if (bUnlimitedAmmo)
    {
        SetAmmo(PrimaryWeapon, SecondaryWeapon);
    }

    if (bOneHitKill)
    {
        OneHitKill(PrimaryWeapon, SecondaryWeapon);
    }

    if (bReduceRecoil)
    {
        ReduceRecoil(PrimaryWeapon, SecondaryWeapon);
    }
    
    if (bImmortality)
    {
        CyberneticSelf->DamageExcludedBones = DamageExcludedBones;
        CyberneticSelf->CharacterMeshData.DamageExcludedBones = DamageExcludedBones;
    }

    /*std::ostringstream addressStream;
    addressStream << std::hex << PrimaryWeapon << std::endl;
    addressStream << std::hex << SelfPlayer << std::endl;
    std::string addressAsString = addressStream.str();
    ImGui::Text(addressAsString.c_str());*/

    ImGui::End();
    ImGui::Render();
    g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, nullptr);
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    return oldPresent(This, SyncInterval, Flags);
}

HRESULT STDMETHODCALLTYPE ImguiInit(IDXGISwapChain* This, UINT SyncInterval, UINT Flags)
{
    if (!bIsInit)
    {
        oldWndProc = (WndProc)SetWindowLongPtr(g_Hwnd, GWLP_WNDPROC, (LONG_PTR)MyWndProc);
        ImGui::CreateContext();
        ImGuiIO& io = ImGui::GetIO(); (void)io;
        io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
        ImGui::StyleColorsDark();

        EngineInit(g_Hwnd);

        bIsInit = TRUE;
    }

    GetDeviceInfo(This);
    ImGui_ImplWin32_Init(g_Hwnd);
    ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);

    UnloadHook((LPVOID*)&oldPresent, ImguiInit);
    LoadHook((LPVOID*)&oldPresent, MyPresent);

    return oldPresent(This, SyncInterval, Flags);
}

VOID GetDeviceInfo(IDXGISwapChain* This)
{
    g_pSwapChain = This;
    g_pSwapChain->GetDevice(__uuidof(g_pd3dDevice), (void**)&g_pd3dDevice);
    g_pd3dDevice->GetImmediateContext(&g_pd3dDeviceContext);
    ID3D11Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, nullptr, &g_mainRenderTargetView);
    pBackBuffer->Release();
}

LRESULT WINAPI MyWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    return CallWindowProc(oldWndProc, hWnd, msg, wParam, lParam);
}


BOOL D3D11Init()
{
    g_Hwnd = FindWindowA("UnrealWindow", NULL);

    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = g_Hwnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    HRESULT res = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, NULL, &featureLevel, NULL);
    if (res == DXGI_ERROR_UNSUPPORTED) // Try high-performance WARP software driver if hardware is not available.
        res = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_WARP, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, NULL, &featureLevel, NULL);
    if (res != S_OK)
        return false;

    pSwapVtble = *((DWORD64**)g_pSwapChain);
    oldPresent = (Present)pSwapVtble[8];
    oldResizeBuffers = (pResizeBuffers)pSwapVtble[13];

    LoadHook((LPVOID*)&oldPresent, ImguiInit);
    LoadHook((LPVOID*)&oldResizeBuffers, MyResizeBuffers);

    if (g_pSwapChain) { g_pSwapChain->Release(); }
    return true;
}
