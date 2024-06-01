#pragma once
#include <windows.h>
#include <iostream>
#include <cmath>
#include <string_view>
#include <string>
#include <format>
#include <array>
#include <vector>
#include <algorithm>
#include "BasicStructs.h"
#include "Draw.h"

extern FNamePool* GName;


//ReadyOrNot
#define GWORLD_OFFSET 0x693FB10
#define GOBJECTS_OFFSET 0x67FB120
#define GNAME_OFFSET 0x67BEDC0
#define CANVASMAP_OFFSET 0x64E5800
#define CANVASMAP_OFFSET_FIRST 0x20
#define CANVASMAP_OFFSET_SECOND 0x280
#define PROJECT_TO_SCREEN_OFFSET 0x3B8AC50
#define LINE_TRACE_FUNC_OFFSET 0x3C25C30
#define TRANSFORMFROMBONESSPACE_FUNC_OFFSET 0x3AC7CD0


VOID EngineInit(HWND hWnd);

// BOOL WorldToScreen(FVector& WorldLocation, FVector2D& Screen, FVector2D& WindowSize);

using pProjectWorldToScreen = BOOL(__fastcall*)(class APlayerController* This, FVector& WorldPosition, FVector2D &ScreenPosition, bool bPlayerViewportRelative);
bool ProjectWorldToScreen(FVector& WorldPosition, FVector2D& ScreenPosition);

std::string GetName(DWORD StrIndex);
bool BoneSpaceToWorld(USkeletalMeshComponent* This, FName BoneName, FVector& outPosition);

using pLineTraceSingle = BOOL(__fastcall*)(class UObject* WorldContextObject, FVector Start, FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);

bool containsSubstring(const std::string& str, const std::string& sub);

bool LineTraceSingle(FVector endPoint);

using pTransformFromBoneSpace = void(__fastcall*)(USkinnedMeshComponent* MeshComponent, FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation);

void WeaponSpeedUp(ABaseMagazineWeapon* PrimaryWeapon, ABaseMagazineWeapon* SecondaryWeapon, float& newSpeed);
void SelfSpeedUp(AActor* SelfPlayer, float& newSpeed);
std::vector<std::string> split_string(std::string& str, char delimiter);
bool startsWith(std::string& A, const char* B);

void HandleCharacter(std::vector<Character>& CharacterList, AActor* SelfPlayer, ImColor RGBColour);
void SetAmmo(ABaseMagazineWeapon* PrimaryWeapon, ABaseMagazineWeapon* SecondaryWeapon);
void OneHitKill(ABaseMagazineWeapon* PrimaryWeapon, ABaseMagazineWeapon* SecondaryWeapon);
void ReduceRecoil(ABaseMagazineWeapon* PrimaryWeapon, ABaseMagazineWeapon* SecondaryWeapon);
void Immortality(ACyberneticCharacter* CyberneticSelf);