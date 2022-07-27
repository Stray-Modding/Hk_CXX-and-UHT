#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "VectorField.generated.h"

UCLASS(MinimalAPI)
class UVectorField : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBox Bounds;
    
    UPROPERTY(EditAnywhere)
    float Intensity;
    
    UVectorField();
};

