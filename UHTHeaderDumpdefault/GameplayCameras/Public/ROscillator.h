#pragma once
#include "CoreMinimal.h"
#include "FOscillator.h"
#include "ROscillator.generated.h"

USTRUCT(BlueprintType)
struct FROscillator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFOscillator Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFOscillator Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFOscillator Roll;
    
    GAMEPLAYCAMERAS_API FROscillator();
};

