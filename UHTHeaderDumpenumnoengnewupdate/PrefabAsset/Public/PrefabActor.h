#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentMobility -FallbackName=EComponentMobility
#include "PrefabActor.generated.h"

class UPrefabComponent;
class UPrefabAsset;

UCLASS()
class PREFABASSET_API APrefabActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPrefabComponent* PrefabComponent;
    
public:
    APrefabActor();
    UFUNCTION(BlueprintCallable)
    void SetPrefab(UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected);
    
    UFUNCTION(BlueprintCallable)
    void SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility);
    
    UFUNCTION(BlueprintPure)
    UPrefabAsset* GetPrefab() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyPrefabActor(bool bDestroyAttachedChildren);
    
};

