#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "PrimitiveMaterialRef.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InterpTrackInstVectorMaterialParam.generated.h"

class UMaterialInstanceDynamic;
class UInterpTrackVectorMaterialParam;

UCLASS()
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    
    UPROPERTY()
    TArray<FVector> ResetVectors;
    
    UPROPERTY()
    TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs;
    
    UPROPERTY()
    UInterpTrackVectorMaterialParam* InstancedTrack;
    
    UInterpTrackInstVectorMaterialParam();
};

