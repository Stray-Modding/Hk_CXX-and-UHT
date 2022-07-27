#pragma once
#include "CoreMinimal.h"
#include "AnimBoneCompressionCodec.h"
#include "AnimationCompressionFormat.h"
#include "AnimCompress.generated.h"

UCLASS(Abstract, EditInlineNew, MinimalAPI)
class UAnimCompress : public UAnimBoneCompressionCodec {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bNeedsSkeleton: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<AnimationCompressionFormat> TranslationCompressionFormat;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<AnimationCompressionFormat> RotationCompressionFormat;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<AnimationCompressionFormat> ScaleCompressionFormat;
    
    UAnimCompress();
};

