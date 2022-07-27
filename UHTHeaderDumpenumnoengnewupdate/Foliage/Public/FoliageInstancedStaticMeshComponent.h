#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HierarchicalInstancedStaticMeshComponent -FallbackName=HierarchicalInstancedStaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "InstancePointDamageSignatureDelegate.h"
#include "InstanceRadialDamageSignatureDelegate.h"
#include "FoliageInstancedStaticMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FOLIAGE_API UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInstancePointDamageSignature OnInstanceTakePointDamage;
    
    UPROPERTY(BlueprintAssignable)
    FInstanceRadialDamageSignature OnInstanceTakeRadialDamage;
    
private:
    UPROPERTY()
    FGuid GenerationGuid;
    
public:
    UFoliageInstancedStaticMeshComponent();
};

