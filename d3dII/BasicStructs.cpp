#include "BasicStructs.h"
#include "Engine.h"

Character::Character(ACyberneticCharacter* Character)
{
    
    CharacterAddress = Character;
    InitSkeleton();
        
    BodyParts = {
		{CharacterSkeleton.MainSpine.Pelvis, CharacterSkeleton.MainSpine.Neck,  CharacterSkeleton.MainSpine.Head },
		{CharacterSkeleton.LeftArm.Neck, CharacterSkeleton.LeftArm.UpperArm, CharacterSkeleton.LeftArm.LowerArm, CharacterSkeleton.LeftArm.Hand, CharacterSkeleton.LeftArm.MiddleFinger},
		{CharacterSkeleton.RightArm.Neck, CharacterSkeleton.RightArm.UpperArm, CharacterSkeleton.RightArm.LowerArm, CharacterSkeleton.RightArm.Hand, CharacterSkeleton.RightArm.MiddleFinger},
		{CharacterSkeleton.LeftLeg.Pelvis, CharacterSkeleton.LeftLeg.Thigh, CharacterSkeleton.LeftLeg.Calf, CharacterSkeleton.LeftLeg.Heel, CharacterSkeleton.LeftLeg.Ball},
		{CharacterSkeleton.RightLeg.Pelvis, CharacterSkeleton.RightLeg.Thigh, CharacterSkeleton.RightLeg.Calf, CharacterSkeleton.RightLeg.Heel, CharacterSkeleton.RightLeg.Ball}
    };

    BodyPartsFlatten = {
        0, CharacterSkeleton.MainSpine.Pelvis, CharacterSkeleton.MainSpine.Neck,  CharacterSkeleton.MainSpine.Head,
        CharacterSkeleton.LeftArm.Neck, CharacterSkeleton.LeftArm.UpperArm, CharacterSkeleton.LeftArm.LowerArm, CharacterSkeleton.LeftArm.Hand, CharacterSkeleton.LeftArm.MiddleFinger,
        CharacterSkeleton.RightArm.Neck, CharacterSkeleton.RightArm.UpperArm, CharacterSkeleton.RightArm.LowerArm, CharacterSkeleton.RightArm.Hand, CharacterSkeleton.RightArm.MiddleFinger,
        CharacterSkeleton.LeftLeg.Pelvis, CharacterSkeleton.LeftLeg.Thigh, CharacterSkeleton.LeftLeg.Calf, CharacterSkeleton.LeftLeg.Heel, CharacterSkeleton.LeftLeg.Ball,
        CharacterSkeleton.RightLeg.Pelvis, CharacterSkeleton.RightLeg.Thigh, CharacterSkeleton.RightLeg.Calf, CharacterSkeleton.RightLeg.Heel, CharacterSkeleton.RightLeg.Ball
    };
}

void Character::Update()
{
    for (const auto& k : BodyPartsFlatten)
    {
        if (BoneSpaceToWorld(CharacterAddress->Mesh, CharacterAddress->Mesh->SkeletalMesh->RefSkeleton.RawRefBoneInfo.Data[k].Name, Bones[k].WorldPosition))
        {
            if (ProjectWorldToScreen(Bones[k].WorldPosition, Bones[k].ScreenPosition))
            {
                Bones[k].isValid = true;
            }
        }
    }
}

void Character::Show(AActor* SelfPlayer, ImColor RGBColour)
{
    auto DistanceToMe = SelfPlayer->GetDistance(CharacterAddress->RootComponent->RelativeLocation) / 100.0;
    auto FormatText = std::format("[{:.0f}m]", DistanceToMe);

    for (const auto& BodyPart : BodyParts)
    {
        for (size_t k = 0; k < BodyPart.size() - 1; ++k)
        {
            int begIndex = BodyPart[k];
            int endIndex = BodyPart[k + 1];
            if (Bones[begIndex].isValid && Bones[endIndex].isValid && begIndex > 0 && endIndex > 0)
            {
                ImVec2 begPoint = { Bones[begIndex].ScreenPosition.X, Bones[begIndex].ScreenPosition.Y };
                ImVec2 endPoint = { Bones[endIndex].ScreenPosition.X, Bones[endIndex].ScreenPosition.Y };

                DrawLine(begPoint, endPoint, RGBColour, 0.5f);
            }
        }
    }
    AttachText(ImVec2(Bones[0].ScreenPosition.X, Bones[0].ScreenPosition.Y), RGBColour, FALSE, FormatText.c_str());
}

void Character::InitSkeleton()
{
	for (auto k = 0; k < CharacterAddress->Mesh->ComponentSpaceTransformsArray[0].Count; ++k)
	{
		auto BoneName = GetName(CharacterAddress->Mesh->SkeletalMesh->RefSkeleton.RawRefBoneInfo.Data[k].Name.ComparisonIndex);
		// std::cout << k << "   " << BoneName << std::endl;
		if (BoneName == "Pelvis")
		{
			CharacterSkeleton.LeftLeg.Pelvis = k;
			CharacterSkeleton.RightLeg.Pelvis = k;
			CharacterSkeleton.MainSpine.Pelvis = k;
		}
		else if (BoneName == "Neck")
		{
			CharacterSkeleton.LeftArm.Neck = k;
			CharacterSkeleton.RightArm.Neck = k;
			CharacterSkeleton.MainSpine.Neck = k;
		}
		else if (BoneName == "head_end")
		{
			CharacterSkeleton.MainSpine.Head = k;
		}
		// Right Arm
		else if (BoneName == "upperarm_RI")
		{
			CharacterSkeleton.RightArm.UpperArm = k;
		}
		else if (BoneName == "lowerarm_RI")
		{
			CharacterSkeleton.RightArm.LowerArm = k;
		}
		else if (BoneName == "hand_RI")
		{
			CharacterSkeleton.RightArm.Hand = k;
		}
		else if (BoneName == "middle_5_end_RI")
		{
			CharacterSkeleton.RightArm.MiddleFinger = k;
		}
		// Left Arm
		else if (BoneName == "upperarm_LE")
		{
			CharacterSkeleton.LeftArm.UpperArm = k;
		}
		else if (BoneName == "lowerarm_LE")
		{
			CharacterSkeleton.LeftArm.LowerArm = k;
		}
		else if (BoneName == "hand_LE")
		{
			CharacterSkeleton.LeftArm.Hand = k;
		}
		else if (BoneName == "middle_5_end_LE")
		{
			CharacterSkeleton.LeftArm.MiddleFinger = k;
		}
		// Right Leg
		else if (BoneName == "thigh_RI")
		{
			CharacterSkeleton.RightLeg.Thigh = k;
		}
		else if (BoneName == "calf_RI")
		{
			CharacterSkeleton.RightLeg.Calf = k;
		}
		else if (BoneName == "heel_RI")
		{
			CharacterSkeleton.RightLeg.Heel = k;
		}
		else if (BoneName == "ball_RI")
		{
			CharacterSkeleton.RightLeg.Ball = k;
		}
		// Left Leg
		else if (BoneName == "thigh_LE")
		{
			CharacterSkeleton.LeftLeg.Thigh = k;
		}
		else if (BoneName == "calf_LE")
		{
			CharacterSkeleton.LeftLeg.Calf = k;
		}
		else if (BoneName == "heel_LE")
		{
			CharacterSkeleton.LeftLeg.Heel = k;
		}
		else if (BoneName == "ball_LE")
		{
			CharacterSkeleton.LeftLeg.Ball = k;
		}
	}

}