#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SceneComponent.h"
#include "ChildActorComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UChildActorComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ChildActorClass;
    
    UPROPERTY(BlueprintReadOnly, NonPIEDuplicateTransient, Replicated, TextExportTransient, meta=(AllowPrivateAccess=true))
    AActor* ChildActor;
    
    UPROPERTY(DuplicateTransient, VisibleDefaultsOnly)
    AActor* ChildActorTemplate;
    
public:
    UChildActorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetChildActorClass(TSubclassOf<AActor> InClass);
    
};

