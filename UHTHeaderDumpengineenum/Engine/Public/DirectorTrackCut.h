#pragma once
#include "CoreMinimal.h"
#include "DirectorTrackCut.generated.h"

USTRUCT(BlueprintType)
struct FDirectorTrackCut {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    float TransitionTime;
    
    UPROPERTY(EditAnywhere)
    FName TargetCamGroup;
    
    UPROPERTY()
    int32 ShotNumber;
    
    ENGINE_API FDirectorTrackCut();
};

