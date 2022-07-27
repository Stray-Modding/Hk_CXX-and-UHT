#pragma once
#include "CoreMinimal.h"
#include "EMovementMode.h"
#include "MovementModeChangedSignatureDelegate.generated.h"

class ACharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMovementModeChangedSignature, ACharacter*, Character, TEnumAsByte<EMovementMode>, PrevMovementMode, uint8, PreviousCustomMode);

