#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "DecalActor.generated.h"

class UDecalComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS()
class ENGINE_API ADecalActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDecalComponent* Decal;
    
public:
    ADecalActor();
    UFUNCTION(BlueprintCallable)
    void SetDecalMaterial(UMaterialInterface* NewDecalMaterial);
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetDecalMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
    
};

