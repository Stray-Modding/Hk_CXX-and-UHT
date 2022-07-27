#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=JoyLibraryRuntime -ObjectName=Manager -FallbackName=Manager
#include "DebugInputManager.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API ADebugInputManager : public AManager {
    GENERATED_BODY()
public:
    ADebugInputManager();
};

