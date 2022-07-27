#pragma once
#include "CoreMinimal.h"
#include "ActorFractureSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DestructibleActor.generated.h"

class UDestructibleComponent;

UCLASS()
class APEXDESTRUCTION_API ADestructibleActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDestructibleComponent* DestructibleComponent;
    
public:
    UPROPERTY(BlueprintAssignable)
    FActorFractureSignature OnActorFracture;
    
    ADestructibleActor();
};

