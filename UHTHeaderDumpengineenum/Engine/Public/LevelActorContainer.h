#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LevelActorContainer.generated.h"

class AActor;

UCLASS(DefaultToInstanced, MinimalAPI)
class ULevelActorContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<AActor*> Actors;
    
    ULevelActorContainer();
};

