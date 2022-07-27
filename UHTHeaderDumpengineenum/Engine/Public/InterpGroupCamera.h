#pragma once
#include "CoreMinimal.h"
#include "InterpGroup.h"
#include "InterpGroupCamera.generated.h"

class UCameraAnim;

UCLASS(CollapseCategories, MinimalAPI)
class UInterpGroupCamera : public UInterpGroup {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UCameraAnim* CameraAnimInst;
    
    UPROPERTY(EditAnywhere)
    float CompressTolerance;
    
    UInterpGroupCamera();
};

