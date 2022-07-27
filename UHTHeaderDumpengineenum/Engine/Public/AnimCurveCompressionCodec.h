#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimCurveCompressionCodec.generated.h"

UCLASS(Abstract, EditInlineNew)
class ENGINE_API UAnimCurveCompressionCodec : public UObject {
    GENERATED_BODY()
public:
    UAnimCurveCompressionCodec();
};

