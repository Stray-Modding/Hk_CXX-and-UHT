#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptViewportClient.generated.h"

UCLASS(Transient)
class UScriptViewportClient : public UObject {
    GENERATED_BODY()
public:
    UScriptViewportClient();
};

