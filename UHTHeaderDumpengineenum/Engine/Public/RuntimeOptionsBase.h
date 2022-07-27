#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RuntimeOptionsBase.generated.h"

UCLASS(Abstract, Config=RuntimeOptions)
class ENGINE_API URuntimeOptionsBase : public UObject {
    GENERATED_BODY()
public:
    URuntimeOptionsBase();
};

