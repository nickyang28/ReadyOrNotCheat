#pragma once
#include "Imgui/imgui.h"
#include <string>
#include <windows.h>
#include <vector>
#include <set>
#include <cmath>
#include "BasicStructs.h"
#include "Engine.h"
#include "Draw.h"

void AutoAim(FVector* pAimTargetWorldPosition, APlayerController* pPlayerController);
void FindTarget(std::vector<Character>& SuspectList, bool bUpdated, AActor* SelfPlayer, FVector& TargetPlayerWorldPosition);