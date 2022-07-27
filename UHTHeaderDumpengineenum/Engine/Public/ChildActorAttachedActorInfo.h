#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ChildActorAttachedActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FChildActorAttachedActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY()
    FName SocketName;
    
    UPROPERTY()
    FTransform RelativeTransform;
    
    ENGINE_API FChildActorAttachedActorInfo();
};

