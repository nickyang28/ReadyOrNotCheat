#pragma once
#include <windows.h>
#include <string>
#include <array>
#include <unordered_map> 
#include <format>
#include "SDK/SDK.h"
#include "Imgui/imgui.h"


static constexpr DWORD FNameMaxBlockBits = 13; // Limit block array a bit, still allowing 8k * block size = 1GB - 2G of FName entry data
static constexpr DWORD FNameBlockOffsetBits = 16;
static constexpr DWORD FNameMaxBlocks = 1 << FNameMaxBlockBits;
static constexpr DWORD FNameBlockOffsets = 1 << FNameBlockOffsetBits;

struct FNameEntryHandle
{
    DWORD Block = 0;
    DWORD Offset = 0;

    FNameEntryHandle(FNameEntryId Id)
        : Block(Id >> FNameBlockOffsetBits)
        , Offset(Id& (FNameBlockOffsets - 1))
    {}
};

struct FNameEntryHeader
{
    WORD bIsWide : 1;
    static constexpr DWORD ProbeHashBits = 5;
    WORD LowercaseProbeHash : ProbeHashBits;
    WORD Len : 10;
};


struct FNameEntry
{
    enum { NAME_SIZE = 1024 };
    FNameEntryHeader Header;
    union
    {
        CHAR	AnsiName[NAME_SIZE];
        WCHAR	WideName[NAME_SIZE];
    };

    std::string ToString()
    {
        if (Header.bIsWide)
        {
            return std::string();
        }

        return std::string(AnsiName, Header.Len);
    }
};


struct FNamePool
{
    LPVOID Lock;
    DWORD CurrentBlock = 0;
    DWORD CurrentByteCursor = 0;
    BYTE* Blocks[FNameMaxBlocks] = {};
    enum { Stride = alignof(FNameEntry) };
    FNameEntry& GetNameEntry(FNameEntryHandle Handle) const
    {
        // Lock not needed
        return *reinterpret_cast<FNameEntry*>(Blocks[Handle.Block] + Stride * Handle.Offset);
    }
};

struct BoneArray
{
    FVector2D   ScreenPosition;
    FVector     WorldPosition;
    bool        isValid;
};

struct RadarDot
{
    FVector* WorldPosition;
    ImColor     DotColour;
};

struct Arm
{
    int Neck;
    int UpperArm;
    int LowerArm;
    int Hand;
    int MiddleFinger;
};

struct Leg
{
    int Pelvis;
    int Thigh;
    int Calf;
    int Heel;
    int Ball;
};

struct Spine
{
    int Pelvis;
    int Neck;
    int Head;
};

struct Skeleton
{
    Spine MainSpine;
    Arm LeftArm;
    Arm RightArm;
    Leg LeftLeg;
    Leg RightLeg;
};

class Character
{
public:
    ACyberneticCharacter* CharacterAddress;
    Skeleton CharacterSkeleton;
    std::vector<std::vector<int>> BodyParts;
    std::array<int, 24> BodyPartsFlatten{};
    std::array<BoneArray, MAX_PATH> Bones{};

    Character(ACyberneticCharacter* Character);
    void InitSkeleton();
    void Update();
    void Show(AActor* SelfPlayer, ImColor RGBColour);
};
