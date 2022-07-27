#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ARLifeCycleComponent.generated.h"

class AARActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARLifeCycleComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInstanceARActorToBeDestroyedDelegate, AARActor*, Actor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInstanceARActorSpawnedDelegate, UClass*, ComponentClass, FGuid, NativeID, AARActor*, SpawnedActor);
    
    UPROPERTY(BlueprintAssignable)
    FInstanceARActorSpawnedDelegate OnARActorSpawnedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FInstanceARActorToBeDestroyedDelegate OnARActorToBeDestroyedDelegate;
    
    UARLifeCycleComponent();
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSpawnARActor(UClass* ComponentClass, FGuid NativeID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDestroyARActor(AARActor* Actor);
    
};

