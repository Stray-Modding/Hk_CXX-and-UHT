#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavRelevantInterface -FallbackName=NavRelevantInterface
#include "NavRelevantComponent.generated.h"

class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NAVIGATIONSYSTEM_API UNavRelevantComponent : public UActorComponent, public INavRelevantInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    uint8 bAttachToOwnersRoot: 1;
    
    UPROPERTY(Transient)
    UObject* CachedNavParent;
    
public:
    UNavRelevantComponent();
    UFUNCTION(BlueprintCallable)
    void SetNavigationRelevancy(bool bRelevant);
    
    
    // Fix for true pure virtual functions not being implemented
};

