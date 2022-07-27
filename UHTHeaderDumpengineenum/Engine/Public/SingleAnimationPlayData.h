#pragma once
#include "CoreMinimal.h"
#include "SingleAnimationPlayData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FSingleAnimationPlayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimationAsset* AnimToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSavedLooping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSavedPlaying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SavedPosition;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float SavedPlayRate;
    
    ENGINE_API FSingleAnimationPlayData();
};

