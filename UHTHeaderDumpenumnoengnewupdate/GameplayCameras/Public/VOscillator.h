#pragma once
#include "CoreMinimal.h"
#include "FOscillator.h"
#include "VOscillator.generated.h"

USTRUCT(BlueprintType)
struct FVOscillator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFOscillator X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFOscillator Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFOscillator Z;
    
    GAMEPLAYCAMERAS_API FVOscillator();
};

