#pragma once
#include "CoreMinimal.h"
#include "VectorField.h"
#include "EVectorFieldConstructionOp.h"
#include "VectorFieldAnimated.generated.h"

class UTexture2D;
class UVectorFieldStatic;

UCLASS(MinimalAPI)
class UVectorFieldAnimated : public UVectorField {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* Texture;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVectorFieldConstructionOp> ConstructionOp;
    
    UPROPERTY(EditAnywhere)
    int32 VolumeSizeX;
    
    UPROPERTY(EditAnywhere)
    int32 VolumeSizeY;
    
    UPROPERTY(EditAnywhere)
    int32 VolumeSizeZ;
    
    UPROPERTY(EditAnywhere)
    int32 SubImagesX;
    
    UPROPERTY(EditAnywhere)
    int32 SubImagesY;
    
    UPROPERTY(EditAnywhere)
    int32 FrameCount;
    
    UPROPERTY(EditAnywhere)
    float FramesPerSecond;
    
    UPROPERTY(EditAnywhere)
    uint8 bLoop: 1;
    
    UPROPERTY(EditAnywhere)
    UVectorFieldStatic* NoiseField;
    
    UPROPERTY(EditAnywhere)
    float NoiseScale;
    
    UPROPERTY(EditAnywhere)
    float NoiseMax;
    
    UVectorFieldAnimated();
};

