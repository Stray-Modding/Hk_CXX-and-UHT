#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "AnimNotifyEvent.h"
#include "AnimMontageInstance.generated.h"

class UAnimMontage;

USTRUCT()
struct ENGINE_API FAnimMontageInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimMontage* Montage;
    
    UPROPERTY()
    bool bPlaying;
    
    UPROPERTY(Transient)
    float DefaultBlendTimeMultiplier;
    
private:
    UPROPERTY()
    TArray<int32> NextSections;
    
    UPROPERTY()
    TArray<int32> PrevSections;
    
    UPROPERTY(Transient)
    TArray<FAnimNotifyEvent> ActiveStateBranchingPoints;
    
    UPROPERTY()
    float Position;
    
    UPROPERTY()
    float PlayRate;
    
    UPROPERTY(Transient)
    FAlphaBlend Blend;
    
    UPROPERTY(Transient)
    int32 DisableRootMotionCount;
    
public:
    FAnimMontageInstance();
};

