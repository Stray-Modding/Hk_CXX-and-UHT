#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=JoyLibraryRuntime -ObjectName=Manager -FallbackName=Manager
#include "ActorIdManager.generated.h"

class AActor;

UCLASS()
class HK_PROJECT_API AActorIdManager : public AManager {
    GENERATED_BODY()
public:
    AActorIdManager();
    UFUNCTION(BlueprintCallable)
    AActor* FindActorById(FName _actorId, AActor* _callingActor);
    
};

