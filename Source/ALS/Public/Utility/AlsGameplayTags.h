﻿#pragma once

#include "NativeGameplayTags.h"

namespace AlsViewModeTags
{
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FirstPerson)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ThirdPerson)
}

namespace AlsLocomotionModeTags
{
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Grounded)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InAir)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Climbing)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Ziplining)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Grabbed)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Swimming)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(WallRunning)
}

namespace AlsRotationModeTags
{
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(VelocityDirection)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ViewDirection)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Aiming)
}

namespace AlsStanceTags
{
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Standing)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Crouching)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Proning)
}

namespace AlsGaitTags
{
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Walking)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Running)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Sprinting)
}

namespace AlsOverlayModeTags
{
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Default)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Masculine)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Feminine)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Injured)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(HandsTied)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Rifle)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(PistolOneHanded)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(PistolTwoHanded)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Bow)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Torch)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Binoculars)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Box)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Barrel)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Inspecting)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Sword)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Grenade)
}

namespace AlsLocomotionActionTags
{
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Rolling)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Mantling)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Ragdolling)
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(GettingUp)
}

namespace AlsGroundedEntryModeTags
{
	ALS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(FromRoll)
}
