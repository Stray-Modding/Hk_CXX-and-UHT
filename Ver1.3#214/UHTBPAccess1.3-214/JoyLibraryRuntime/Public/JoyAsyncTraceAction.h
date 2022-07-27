#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "JoyAsyncTraceAction.generated.h"

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UJoyAsyncTraceAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UJoyAsyncTraceAction();
};

