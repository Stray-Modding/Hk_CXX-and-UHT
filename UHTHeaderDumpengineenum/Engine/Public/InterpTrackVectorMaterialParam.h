#pragma once
#include "CoreMinimal.h"
#include "InterpTrackVectorBase.h"
#include "InterpTrackVectorMaterialParam.generated.h"

class UMaterialInterface;

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> TargetMaterials;
    
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UInterpTrackVectorMaterialParam();
};

