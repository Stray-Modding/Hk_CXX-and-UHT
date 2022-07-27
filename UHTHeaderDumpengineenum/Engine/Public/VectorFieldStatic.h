#pragma once
#include "CoreMinimal.h"
#include "VectorField.h"
#include "VectorFieldStatic.generated.h"

UCLASS(MinimalAPI)
class UVectorFieldStatic : public UVectorField {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 SizeX;
    
    UPROPERTY(VisibleAnywhere)
    int32 SizeY;
    
    UPROPERTY(VisibleAnywhere)
    int32 SizeZ;
    
    UPROPERTY(EditAnywhere)
    bool bAllowCPUAccess;
    
    UVectorFieldStatic();
};

