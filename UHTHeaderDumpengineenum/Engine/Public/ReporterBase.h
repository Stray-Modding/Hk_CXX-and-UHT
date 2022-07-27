#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReporterBase.generated.h"

UCLASS(Abstract)
class UReporterBase : public UObject {
    GENERATED_BODY()
public:
    UReporterBase();
};

