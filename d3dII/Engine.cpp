#include "Engine.h"

FNamePool* GName = nullptr;
DWORD64 GameBase = NULL;
extern UWorld* GWorld;
DWORD64 Matrix = NULL;
RECT WndRect = { 0,0 };
extern float WndWidth;
extern float WndHeight;
pProjectWorldToScreen _ProjectWorldToScreen = nullptr;
pLineTraceSingle _LineTraceSingle = nullptr;
pTransformFromBoneSpace _TransformFromBoneSpace = nullptr;

static std::unordered_map<int, std::string> GetHealthStatus{
	{0, "Healthy"},
	{1, "Injured"},
	{2, "Downed"},
	{3, "Incapacitated"},
	{4, "Dead"},
	{5, "Arrested"},
	{6, "NotAvailable"}
};

std::array<int, 30> BodyPartsFlatten{
								1, 4, 96, 44, 47,  // Spine
								109, 99, 1, 111, 121,     // Pelvis
								44, 40, 8, 11, 25, // LeftArm
								44, 83, 52, 54, 63, // RightArm
								121, 114, 112, 115, 118,     // LeftLeg
								109, 102, 100, 103, 106   // RightLeg
							};

VOID EngineInit(HWND hWnd)
{
	GameBase = reinterpret_cast<DWORD64>(GetModuleHandle(NULL));
	GWorld = reinterpret_cast<UWorld*>(*reinterpret_cast<DWORD64*>(GameBase + GWORLD_OFFSET));
    GName = reinterpret_cast<FNamePool*>(reinterpret_cast<DWORD64*>(GameBase + GNAME_OFFSET));

    _ProjectWorldToScreen = reinterpret_cast<pProjectWorldToScreen>(GameBase + PROJECT_TO_SCREEN_OFFSET);
	_LineTraceSingle = reinterpret_cast<pLineTraceSingle>(GameBase + LINE_TRACE_FUNC_OFFSET);
	_TransformFromBoneSpace = reinterpret_cast<pTransformFromBoneSpace>(GameBase + TRANSFORMFROMBONESSPACE_FUNC_OFFSET);

	if (GWorld)
	{
		Matrix = *((DWORD64*)(GameBase + CANVASMAP_OFFSET));
		Matrix = *((DWORD64*)(Matrix + CANVASMAP_OFFSET_FIRST));
		GetWindowRect(hWnd, &WndRect);
		WndWidth = (float)(WndRect.right - WndRect.left);
		WndHeight = (float)(WndRect.bottom - WndRect.top);
	}
}

bool ProjectWorldToScreen(FVector& WorldPosition, FVector2D& ScreenPosition)
{
    APlayerController* Player = GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController;

    return (bool)_ProjectWorldToScreen(Player, WorldPosition, ScreenPosition, FALSE);
}


std::string UObject::GetName()
{
    return GName->GetNameEntry(NamePrivate.ComparisonIndex).ToString();
}

float AActor::GetDistance(FVector AActorLocation)
{
	auto deltaX = (float)(RootComponent->RelativeLocation.X - AActorLocation.X);
	auto deltaY = (float)(RootComponent->RelativeLocation.Y - AActorLocation.Y);
	auto deltaZ = (float)(RootComponent->RelativeLocation.Z - AActorLocation.Z);

    return (float)std::sqrt(deltaX * deltaX + deltaY * deltaY + deltaZ * deltaZ);
}

std::string GetName(DWORD StrIndex)
{
	return GName->GetNameEntry(StrIndex).ToString();
}


bool BoneSpaceToWorld(USkeletalMeshComponent* This, FName BoneName, FVector& outPosition)
{
	FRotator outRotator = {};
	_TransformFromBoneSpace(This, BoneName, { 0,0,0 }, { 0,0,0 }, outPosition, outRotator);
	return (bool)(outPosition.X != 0.0f && outPosition.Y != 0.0f && outPosition.Z != 0.0f);
}

bool LineTraceSingle(FVector endPoint)
{
	FVector CameraLocation = GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController->PlayerCameraManager->CameraCachePrivate.POV.Location;
	FHitResult hit = {};
	TArray<AActor*> IgonreArray(GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController->AcknowledgedPawn);
	FLinearColor _Colour = { 0,0,0,0 };
	bool _return = _LineTraceSingle(
		GWorld,
		CameraLocation,
		endPoint,
		TEnumAsByte<ETraceTypeQuery> {0},
		true,
		IgonreArray,
		TEnumAsByte<EDrawDebugTrace> {0},
		hit,
		true,
		_Colour,
		_Colour,
		0.0f
	);

	return _return;
}

bool containsSubstring(const std::string& str, const std::string& sub) {
	// Use find method of std::string to check for substring
	if (str.find(sub) != std::string::npos) {
		// Substring found
		return true;
	}
	// Substring not found
	return false;
}


void WeaponSpeedUp(ABaseMagazineWeapon* PrimaryWeapon, ABaseMagazineWeapon* SecondaryWeapon, float& newSpeed)
{
	if (PrimaryWeapon)
	{
		PrimaryWeapon->CustomTimeDilation = newSpeed;
		PrimaryWeapon->FireRate = 1.0f / newSpeed;
	}
	if (SecondaryWeapon) 
	{
		SecondaryWeapon->CustomTimeDilation = newSpeed;
		SecondaryWeapon->FireRate = 1.0f / newSpeed;
	}
}

void SelfSpeedUp(AActor* SelfPlayer, float& newSpeed)
{
	if (SelfPlayer) { SelfPlayer->CustomTimeDilation = newSpeed; }
}

std::vector<std::string> split_string(std::string& str, char delimiter)
{
	std::vector<std::string> result;
	size_t start = 0;
	size_t end = 0;

	// Loop over the string finding each instance of the delimiter
	while ((end = str.find(delimiter, start)) != std::string::npos) {
		// Create a new string for each substring and add it to the result vector
		result.emplace_back(str.substr(start, end - start));
		start = end + 1;
	}
	// Add the last substring after the last delimiter to the result
	if (start < str.size()) {
		result.emplace_back(str.substr(start));
	}

	return result;
}

bool startsWith(std::string& A, const char* B)
{
	// Convert char* to std::string for easy handling
	std::string Bstr = B;

	// Check if B's length is greater than A's length
	if (Bstr.size() > A.size()) {
		return false;
	}

	// Compare the beginning of A with Bstr
	return A.substr(0, Bstr.size()) == Bstr;
}


void HandleCharacter(std::vector<Character>& CharacterList, AActor* SelfPlayer, ImColor RGBColour)
{
	for (Character CyberneticCharacter : CharacterList)
	{
		auto HealthStatus = static_cast<int>(CyberneticCharacter.CharacterAddress->CharacterHealth->HealthStatus);
		if (HealthStatus <= 2 && HealthStatus >= 0)
		{
			CyberneticCharacter.Update();
			CyberneticCharacter.Show(SelfPlayer, RGBColour);
		}
	}
}

void SetAmmo(ABaseMagazineWeapon* PrimaryWeapon, ABaseMagazineWeapon* SecondaryWeapon)
{
	/*for (auto k = 0; k < PrimaryWeapon->Magazines.Count; ++k)
	{
		PrimaryWeapon->Magazines.Data[k].Ammo = 65535;
	}

	for (auto k = 0; k < SecondaryWeapon->Magazines.Count; ++k)
	{
		SecondaryWeapon->Magazines.Data[k].Ammo = 65535;
	}*/
	PrimaryWeapon->bInfiniteAmmo = true;
	SecondaryWeapon->bInfiniteAmmo = true;
}

void OneHitKill(ABaseMagazineWeapon* PrimaryWeapon, ABaseMagazineWeapon* SecondaryWeapon)
{
	PrimaryWeapon->DefaultDamage = 1000;
	PrimaryWeapon->CurrentAmmoType.Damage = 1000;
	SecondaryWeapon->DefaultDamage = 1000;
	SecondaryWeapon->CurrentAmmoType.Damage = 1000;
}

void ReduceRecoil(ABaseMagazineWeapon* PrimaryWeapon, ABaseMagazineWeapon* SecondaryWeapon)
{
	PrimaryWeapon->Wobble = 0;
	PrimaryWeapon->RecoilPattern = TArray<FRotator>();
	PrimaryWeapon->RecoilInterpSpeed = 0;
	PrimaryWeapon->FireCameraShake = nullptr;
	PrimaryWeapon->FireCameraShakeInst = nullptr;
	PrimaryWeapon->FirstShotRecoil = 0;
	PrimaryWeapon->FirstShotSpread = 0;
	PrimaryWeapon->bIgnoreAmmoTypeSpread = 1;
	PrimaryWeapon->SpreadPattern = FRotator{};
	PrimaryWeapon->ADSSpreadMultiplier = 0;
	PrimaryWeapon->FirstShotSpread = 0;
	PrimaryWeapon->PendingSpread = FRotator{};
	PrimaryWeapon->VelocitySpreadMultiplier = 0;
	PrimaryWeapon->ADSRecoilMultiplier = 0;
	PrimaryWeapon->RecoilRandomness = 0;
	PrimaryWeapon->RicochetEffects = nullptr;
	PrimaryWeapon->RicochetParticleSystem = nullptr;
	PrimaryWeapon->RicochetEvent = nullptr;
	PrimaryWeapon->bCalculateProcRecoil = 0;
	PrimaryWeapon->RecoilDampStrength = 0;
	PrimaryWeapon->RecoilFireTime = 0;
	PrimaryWeapon->RecoilFireStrength = 0;
	PrimaryWeapon->RecoilAngleStrength = 0;
	PrimaryWeapon->RecoilFireADSModifier = 0;
	PrimaryWeapon->RecoilAngleADSModifier = 0;
	PrimaryWeapon->RecoilRotationBuildup = FRotator{};
	PrimaryWeapon->RecoilPositionBuildup = FVector{};
	PrimaryWeapon->VelocityRecoilMultiplier = 0;
	PrimaryWeapon->VelocitySpreadMultiplier = 0;

	SecondaryWeapon->Wobble = 0;
	SecondaryWeapon->RecoilPattern = TArray<FRotator>();
	SecondaryWeapon->RecoilInterpSpeed = 0;
	SecondaryWeapon->FireCameraShake = nullptr;
	SecondaryWeapon->FireCameraShakeInst = nullptr;
	SecondaryWeapon->FirstShotRecoil = 0;
	SecondaryWeapon->FirstShotSpread = 0;
	SecondaryWeapon->bIgnoreAmmoTypeSpread = 1;
	SecondaryWeapon->SpreadPattern = FRotator{};
	SecondaryWeapon->ADSSpreadMultiplier = 0;
	SecondaryWeapon->FirstShotSpread = 0;
	SecondaryWeapon->PendingSpread = FRotator{};
	SecondaryWeapon->VelocitySpreadMultiplier = 0;
	SecondaryWeapon->ADSRecoilMultiplier = 0;
	SecondaryWeapon->RecoilRandomness = 0;
	SecondaryWeapon->RicochetEffects = nullptr;
	SecondaryWeapon->RicochetParticleSystem = nullptr;
	SecondaryWeapon->RicochetEvent = nullptr;
	SecondaryWeapon->bCalculateProcRecoil = 0;
	SecondaryWeapon->RecoilDampStrength = 0;
	SecondaryWeapon->RecoilFireTime = 0;
	SecondaryWeapon->RecoilFireStrength = 0;
	SecondaryWeapon->RecoilAngleStrength = 0;
	SecondaryWeapon->RecoilFireADSModifier = 0;
	SecondaryWeapon->RecoilAngleADSModifier = 0;
	SecondaryWeapon->RecoilRotationBuildup = FRotator{};
	SecondaryWeapon->RecoilPositionBuildup = FVector{};
	SecondaryWeapon->VelocityRecoilMultiplier = 0;
	SecondaryWeapon->VelocitySpreadMultiplier = 0;
}

void Immortality(ACyberneticCharacter* CyberneticSelf)
{
	if (!CyberneticSelf) return;
	std::vector<FName> BoneNameVector;
	int BoneNumber = CyberneticSelf->Mesh->ComponentSpaceTransformsArray[0].Count;
	for (auto k = 0; k < BoneNumber; ++k)
	{
		BoneNameVector.emplace_back(CyberneticSelf->Mesh->SkeletalMesh->RefSkeleton.RawRefBoneInfo.Data[k].Name);
	}
	TArray<FName> DamageExcludedBones(BoneNameVector);
	CyberneticSelf->DamageExcludedBones = DamageExcludedBones;
}


