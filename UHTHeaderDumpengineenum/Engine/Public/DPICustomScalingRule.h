#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DPICustomScalingRule.generated.h"

UCLASS(Abstract)
class ENGINE_API UDPICustomScalingRule : public UObject {
    GENERATED_BODY()
public:
    UDPICustomScalingRule();
};

