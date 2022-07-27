#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SoundVariation.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct SOUNDUTILITIES_API FSoundVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundWave* SoundWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ProbabilityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D VolumeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D PitchRange;
    
    FSoundVariation();
};

