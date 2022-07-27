#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "ColorGradePerRangeSettings.generated.h"

USTRUCT(BlueprintType)
struct FColorGradePerRangeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 Saturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 Contrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 Gamma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 Gain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector4 Offset;
    
    ENGINE_API FColorGradePerRangeSettings();
};

