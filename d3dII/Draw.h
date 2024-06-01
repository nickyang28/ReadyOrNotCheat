#pragma once
#include "Imgui/imgui.h"
#include <string>
#include <windows.h>
#include <vector>
#include <iostream>
#include <cmath>
#include <sstream> 
#include "BasicStructs.h"
#include "Engine.h"

#define M_PI			3.14159265358979323846f
#define RADAR_CENTRE_X	0.85f
#define RADAR_CENTRE_Y	0.15f
#define RADAR_RADIUS	0.1f

void DrawRect(float x, float y, float w, float h, ImColor Colour, float Thickness);
std::string AnisToUTF8(const std::string& str);
void AttachText(ImVec2 Screen, ImColor Colour, bool Outlined, const char* Str, ...);
void DrawLine(const ImVec2& p1, const ImVec2& p2, ImColor Colour, float Thickness);
void DrawRadar(float WndWidth, float WndHeight, AActor* SelfPlayer, FCameraCacheEntry& CameraCacheEntry, std::vector<RadarDot>& RadarDots, float MaxDistance);
void DrawReticle(float WndWidth, float WndHeight);
void ShowAmmo(float WndWidth, float WndHeight, ABaseMagazineWeapon* PrimaryWeapon, ABaseMagazineWeapon* SecondaryWeapon);