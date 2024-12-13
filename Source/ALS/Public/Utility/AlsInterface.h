// All rights reserved Wise Labs ®

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Sound/SoundBase.h"
#include "AlsInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UAlsInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ALS_API IAlsInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent)
	USoundBase* GetUniqueCharacterFootsteps();
};
