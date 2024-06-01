#include "Draw.h"

void DrawRect(float x, float y, float w, float h, ImColor Colour, float Thickness)
{
    ImGui::GetForegroundDrawList()->AddRect(ImVec2(x, y), ImVec2(x + w, y + h), ImGui::ColorConvertFloat4ToU32(Colour), NULL, NULL, Thickness);
}

std::string AnisToUTF8(const std::string& str)
{
    // Determine the size of the wide character buffer needed
    int wideCharSize = MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, nullptr, 0);
    if (wideCharSize == 0)
    {
        // Handle error
        return "";
    }

    // Allocate buffer for wide characters
    std::wstring wideString(wideCharSize, 0);

    // Convert ANSI string to wide string
    MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, &wideString[0], wideCharSize);

    // Determine the size of the UTF-8 buffer needed
    int utf8Size = WideCharToMultiByte(CP_UTF8, 0, wideString.c_str(), -1, nullptr, 0, nullptr, nullptr);
    if (utf8Size == 0)
    {
        // Handle error
        return "";
    }

    // Allocate buffer for UTF-8 characters
    std::string utf8String(utf8Size, 0);

    // Convert wide string to UTF-8 string
    WideCharToMultiByte(CP_UTF8, 0, wideString.c_str(), -1, &utf8String[0], utf8Size, nullptr, nullptr);

    // Remove the null terminator added by WideCharToMultiByte
    utf8String.resize(utf8Size - 1);

    return utf8String;
}

void AttachText(ImVec2 Screen, ImColor Colour, bool Outlined, const char* Str, ...)
{
    std::vector<char> Buffer(1024);
    va_list va_alist;

    va_start(va_alist, Str);
    std::vsnprintf(Buffer.data(), Buffer.size(), Str, va_alist);
    va_end(va_alist);

    std::string UTF8 = AnisToUTF8(std::string(Buffer.data()));

    if (Outlined) {
        ImU32 c = ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f));
        ImGui::GetForegroundDrawList()->AddText(ImVec2(Screen.x + 1.0f, Screen.y + 1.0f), c, UTF8.c_str());
    }
    ImGui::GetForegroundDrawList()->AddText(Screen, Colour, UTF8.c_str());
}

void DrawLine(const ImVec2& p1, const ImVec2& p2, ImColor Colour, float Thickness)
{
    ImGui::GetForegroundDrawList()->AddLine(p1, p2, Colour, Thickness);
}

void DrawRadar(float WndWidth, float WndHeight, AActor* SelfPlayer, FCameraCacheEntry& CameraCacheEntry, std::vector<RadarDot>& RadarDots, float MaxDistance)
{
    float RadarCentreX = WndWidth * RADAR_CENTRE_X;
    float RadarCentreY = WndHeight * RADAR_CENTRE_Y;
    float RadarRadius = (WndWidth < WndHeight ? WndWidth : WndHeight) * RADAR_RADIUS;
    ImU32 cWhite = ImGui::ColorConvertFloat4ToU32(ImVec4(255.0f, 255.0f, 255.0f, 1.0f));
    ImGui::GetForegroundDrawList()->AddCircle(ImVec2({ RadarCentreX, RadarCentreY }), RadarRadius, cWhite, 0, 2.0f);
    ImGui::GetForegroundDrawList()->AddLine(ImVec2({ RadarCentreX - RadarRadius, RadarCentreY }), ImVec2({ RadarCentreX + RadarRadius, RadarCentreY }), cWhite, .5f);
    ImGui::GetForegroundDrawList()->AddLine(ImVec2({ RadarCentreX, RadarCentreY - RadarRadius }), ImVec2({ RadarCentreX, RadarCentreY + RadarRadius }), cWhite, .5f);

    FRotator CameraRotator = CameraCacheEntry.POV.Rotation;

    for (auto const& RadarDot : RadarDots)
    {
        if (!RadarDot.WorldPosition) continue;

        auto DistanceToActor = (float)SelfPlayer->GetDistance(*(RadarDot.WorldPosition)) / 100.00f;
        if (DistanceToActor > MaxDistance) continue;

        FVector Direction;
        Direction.X = RadarDot.WorldPosition->X - SelfPlayer->RootComponent->RelativeLocation.X;
        Direction.Y = RadarDot.WorldPosition->Y - SelfPlayer->RootComponent->RelativeLocation.Y;
        Direction.Z = RadarDot.WorldPosition->Z - SelfPlayer->RootComponent->RelativeLocation.Z;

        float normal = (float)std::sqrt(
            std::pow(Direction.X, 2) +
            std::pow(Direction.Y, 2) +
            std::pow(Direction.Z, 2)
        );

        Direction.X /= normal;
        Direction.Y /= normal;
        Direction.Z /= normal;

        FVector2D vSelfToActor = FVector2D(Direction.X, Direction.Y);

        // Calculate normalized direction based on camera rotation
        float CosAngle = (float)std::cos(CameraRotator.Yaw * M_PI / 180.0);  // Convert degrees to radians and calculate cosine
        float SinAngle = (float)std::sin(CameraRotator.Yaw * M_PI / 180.0);
        FVector2D vNorm = FVector2D(
            -SinAngle * vSelfToActor.X + CosAngle * vSelfToActor.Y, // Rotate X component
            -CosAngle * vSelfToActor.X - SinAngle * vSelfToActor.Y  // Rotate Y component

        );

        // Determine radar dot position relative to radar center
        FVector2D vOnRadar = { vNorm.X * DistanceToActor / MaxDistance * RadarRadius, vNorm.Y * DistanceToActor / MaxDistance * RadarRadius };

        ImGui::GetForegroundDrawList()->AddCircle(ImVec2({ RadarCentreX + vOnRadar.X, RadarCentreY + vOnRadar.Y }), 2.0f, RadarDot.DotColour, 0, 2.0f);
    }
}

void DrawReticle(float WndWidth, float WndHeight)
{
    FVector2D ScreenCentre = { WndWidth / 2, WndHeight / 2 };
    DrawLine({ ScreenCentre.X - 5, ScreenCentre.Y }, { ScreenCentre.X + 5, ScreenCentre.Y }, { 0, 255, 0 }, 0.5f);
    DrawLine({ ScreenCentre.X, ScreenCentre.Y - 5 }, { ScreenCentre.X, ScreenCentre.Y + 5 }, { 0, 255, 0 }, 0.5f);
}

void ShowAmmo(float WndWidth, float WndHeight, ABaseMagazineWeapon* PrimaryWeapon, ABaseMagazineWeapon* SecondaryWeapon)
{
    std::ostringstream ammoStream;

    for (auto k = 0; k < PrimaryWeapon->Magazines.Count; ++k)
    {
        auto bullets = PrimaryWeapon->Magazines.Data[k].Ammo;
        ammoStream << "Primary_" << k+1 << ": " << bullets << std::endl;
    }

    for (auto k = 0; k < SecondaryWeapon->Magazines.Count; ++k)
    {
        auto bullets = SecondaryWeapon->Magazines.Data[k].Ammo;
        ammoStream << "Secondary_" << k+1 << ": " << bullets << std::endl;
    }
    std::string ammoAsString = ammoStream.str();
    AttachText({ 0, WndHeight / 2 }, { 220,20,60 }, false, ammoAsString.c_str());
}
