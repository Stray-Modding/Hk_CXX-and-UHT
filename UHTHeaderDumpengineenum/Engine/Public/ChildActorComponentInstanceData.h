#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SceneComponentInstanceData.h"
#include "ChildActorAttachedActorInfo.h"
#include "ChildActorComponentInstanceData.generated.h"

class AActor;

USTRUCT()
struct ENGINE_API FChildActorComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<AActor> ChildActorClass;
    
    UPROPERTY()
    FName ChildActorName;
    
    UPROPERTY()
    TArray<FChildActorAttachedActorInfo> AttachedActors;
    
    FChildActorComponentInstanceData();
};

