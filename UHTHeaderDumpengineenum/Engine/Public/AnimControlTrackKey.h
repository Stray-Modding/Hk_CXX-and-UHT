#pragma once
#include "CoreMinimal.h"
#include "AnimControlTrackKey.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAnimControlTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    float StartTime;
    
    UPROPERTY()
    UAnimSequence* AnimSeq;
    
    UPROPERTY()
    float AnimStartOffset;
    
    UPROPERTY()
    float AnimEndOffset;
    
    UPROPERTY()
    float AnimPlayRate;
    
    UPROPERTY()
    uint8 bLooping: 1;
    
    UPROPERTY()
    uint8 bReverse: 1;
    
    ENGINE_API FAnimControlTrackKey();
};

