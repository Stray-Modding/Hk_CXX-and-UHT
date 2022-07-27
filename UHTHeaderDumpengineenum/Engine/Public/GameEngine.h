#pragma once
#include "CoreMinimal.h"
#include "Engine.h"
#include "GameEngine.generated.h"

class UGameInstance;

UCLASS(NonTransient)
class ENGINE_API UGameEngine : public UEngine {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float MaxDeltaTime;
    
    UPROPERTY(Config)
    float ServerFlushLogInterval;
    
    UPROPERTY(Transient)
    UGameInstance* GameInstance;
    
    UGameEngine();
};

