#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakePattern -FallbackName=CameraShakePattern
#include "SequenceCameraShakePattern.generated.h"

class USequenceCameraShakeSequencePlayer;
class UCameraAnimationSequence;
class USequenceCameraShakeCameraStandIn;

UCLASS(EditInlineNew)
class TEMPLATESEQUENCE_API USequenceCameraShakePattern : public UCameraShakePattern {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCameraAnimationSequence* Sequence;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    float blendInTime;
    
    UPROPERTY(EditAnywhere)
    float blendOutTime;
    
    UPROPERTY(EditAnywhere)
    float RandomSegmentDuration;
    
    UPROPERTY(EditAnywhere)
    bool bRandomSegment;
    
private:
    UPROPERTY(Instanced, Transient)
    USequenceCameraShakeSequencePlayer* Player;
    
    UPROPERTY(Instanced, Transient)
    USequenceCameraShakeCameraStandIn* CameraStandIn;
    
public:
    USequenceCameraShakePattern();
};

