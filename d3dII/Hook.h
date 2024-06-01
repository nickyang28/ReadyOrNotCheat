#pragma once
#include <windows.h>
#include "Detours/include/detours.h"
#include "Detours/include/detver.h"


VOID LoadHook(PVOID* ppPointer, PVOID pDetour);

VOID UnloadHook(PVOID* ppPointer, PVOID pDetour);