#pragma once
#include "CoreMinimal.h"
#include "AIStimulus.h"
#include "ActorPerceptionUpdateInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorPerceptionUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 TargetId;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite)
    FAIStimulus Stimulus;
    
    AIMODULE_API FActorPerceptionUpdateInfo();
};

