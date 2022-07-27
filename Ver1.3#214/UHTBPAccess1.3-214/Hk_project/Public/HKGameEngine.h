#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameEngine -FallbackName=GameEngine
#include "HKGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHKGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UHKGameEngine();
};

