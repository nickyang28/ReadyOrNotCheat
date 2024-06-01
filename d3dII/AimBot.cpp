#include "AimBot.h"



void AutoAim(FVector* pAimTargetWorldPosition, APlayerController* pPlayerController)
{
	if (!pAimTargetWorldPosition || !pPlayerController) { return; }
	if (pAimTargetWorldPosition->X == 0 && pAimTargetWorldPosition->Y == 0 && pAimTargetWorldPosition->Z == 0) { return; }

	FVector CameraPosition = pPlayerController->PlayerCameraManager->CameraCachePrivate.POV.Location;
	FVector AimTargetWorldPosition = *pAimTargetWorldPosition;

	FVector2D AimTargetScreenPosition;
	ProjectWorldToScreen(AimTargetWorldPosition, AimTargetScreenPosition);

	FVector AngleDiff = {
		AimTargetWorldPosition.X - CameraPosition.X,
		AimTargetWorldPosition.Y - CameraPosition.Y,
		AimTargetWorldPosition.Z - CameraPosition.Z
	};

	pPlayerController->ControlRotation.Yaw = (float)(atan2(AngleDiff.Y, AngleDiff.X) * 180.0f / M_PI);
	pPlayerController->ControlRotation.Pitch = (float)(atan2(AngleDiff.Z, std::sqrt(std::pow(AngleDiff.X, 2) + std::pow(AngleDiff.Y, 2))) * 180.0f / M_PI);
}

void FindTarget(std::vector<Character>& SuspectList, bool bUpdated, AActor* SelfPlayer, FVector& TargetPlayerWorldPosition)
{
	float fAutoAimDistance = INFINITY;
	for (Character Suspect : SuspectList)
	{
		auto HealthStatus = static_cast<int>(Suspect.CharacterAddress->CharacterHealth->HealthStatus);
		if (HealthStatus > 2) continue;
		Suspect.Update();

		auto _aimDistance = SelfPlayer->GetDistance(Suspect.Bones[Suspect.CharacterSkeleton.MainSpine.Head].WorldPosition);

		if (_aimDistance < fAutoAimDistance)
		{
			TargetPlayerWorldPosition = Suspect.Bones[Suspect.CharacterSkeleton.MainSpine.Head].WorldPosition;
			fAutoAimDistance = _aimDistance;
		}
	}
}
