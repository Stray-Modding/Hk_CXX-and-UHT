#pragma once
#include "CoreMinimal.h"
#include "EActorSequenceObjectReferenceType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ActorSequenceObjectReference.generated.h"

USTRUCT(BlueprintType)
struct FActorSequenceObjectReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    EActorSequenceObjectReferenceType Type;
    
    UPROPERTY()
    FGuid ActorId;
    
    UPROPERTY()
    FString PathToComponent;
    
public:
    ACTORSEQUENCE_API FActorSequenceObjectReference();
};

