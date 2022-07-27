#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapARPinType.h"
#include "MagicLeapARPinState.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPARPIN_API FMagicLeapARPinState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Confidence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ValidRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationError;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TranslationError;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMagicLeapARPinType PinType;
    
    FMagicLeapARPinState();
};

