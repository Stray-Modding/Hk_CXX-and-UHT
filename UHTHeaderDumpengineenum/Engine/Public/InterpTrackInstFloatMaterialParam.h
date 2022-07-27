#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "PrimitiveMaterialRef.h"
#include "InterpTrackInstFloatMaterialParam.generated.h"

class UMaterialInstanceDynamic;
class UInterpTrackFloatMaterialParam;

UCLASS()
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    
    UPROPERTY()
    TArray<float> ResetFloats;
    
    UPROPERTY()
    TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs;
    
    UPROPERTY()
    UInterpTrackFloatMaterialParam* InstancedTrack;
    
    UInterpTrackInstFloatMaterialParam();
};

