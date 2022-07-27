#pragma once
#include "CoreMinimal.h"
#include "ENotifyFilterType.h"
#include "AnimLinkableElement.h"
#include "EMontageNotifyTickType.h"
#include "AnimNotifyEvent.generated.h"

class UAnimNotify;
class UAnimNotifyState;

USTRUCT(BlueprintType)
struct FAnimNotifyEvent : public FAnimLinkableElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    float DisplayTime;
    
    UPROPERTY()
    float TriggerTimeOffset;
    
    UPROPERTY()
    float EndTriggerTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TriggerWeightThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NotifyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UAnimNotify* Notify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UAnimNotifyState* NotifyStateClass;
    
    UPROPERTY()
    float Duration;
    
    UPROPERTY()
    FAnimLinkableElement EndLink;
    
    UPROPERTY()
    bool bConvertedFromBranchingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMontageNotifyTickType::Type> MontageTickType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NotifyTriggerChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ENotifyFilterType::Type> NotifyFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NotifyFilterLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTriggerOnDedicatedServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTriggerOnFollower;
    
    UPROPERTY()
    int32 TrackIndex;
    
    ENGINE_API FAnimNotifyEvent();
};

