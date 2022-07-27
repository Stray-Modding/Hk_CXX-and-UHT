#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEasingFunc -FallbackName=EEasingFunc
#include "FuzzyBool.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FFuzzyBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> EasingType;
    
    FFuzzyBool();
};

