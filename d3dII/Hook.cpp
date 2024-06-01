#include "Hook.h"

VOID LoadHook(PVOID* ppPointer, PVOID pDetour)
{
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(ppPointer, pDetour);
	DetourTransactionCommit();
	return;
}

VOID UnloadHook(PVOID* ppPointer, PVOID pDetour)
{
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourDetach(ppPointer, pDetour);
	DetourTransactionCommit();
	return;
}