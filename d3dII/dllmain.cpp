// dllmain.cpp : Defines the entry point for the DLL application.
#include "dllmain.h"
#include "D3D11.h"

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        //AllocConsole();
        //FILE* stream;
        //freopen_s(&stream, "CONOUT$", "w+", stdout);
        ::CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)D3D11Init, NULL, NULL, NULL);
        break;
    }
    case DLL_THREAD_ATTACH:
    {
        break;
    }
    case DLL_THREAD_DETACH:
    {
        break;
    }
    case DLL_PROCESS_DETACH:
    {
        break;
    }
    }
    return TRUE;
}

