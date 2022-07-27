#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HierarchicalSimplification.h"
#include "HierarchicalLODSetup.generated.h"

class UMaterialInterface;

UCLASS()
class ENGINE_API UHierarchicalLODSetup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FHierarchicalSimplification> HierarchicalLODSetup;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial;
    
    UHierarchicalLODSetup();
};

