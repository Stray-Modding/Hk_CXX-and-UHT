#pragma once
#include "CoreMinimal.h"
#include "InterpTrackFloatBase.h"
#include "InterpTrackFloatMaterialParam.generated.h"

class UMaterialInterface;

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> TargetMaterials;
    
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UInterpTrackFloatMaterialParam();
};

