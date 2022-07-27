#pragma once
#include "CoreMinimal.h"
#include "DynamicSubsystem.h"
#include "EngineSubsystem.generated.h"

UCLASS(Abstract)
class ENGINE_API UEngineSubsystem : public UDynamicSubsystem {
    GENERATED_BODY()
public:
    UEngineSubsystem();
};

