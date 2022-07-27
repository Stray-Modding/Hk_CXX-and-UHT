#pragma once
#include "CoreMinimal.h"
#include "Subsystem.h"
#include "WorldSubsystem.generated.h"

UCLASS(Abstract)
class ENGINE_API UWorldSubsystem : public USubsystem {
    GENERATED_BODY()
public:
    UWorldSubsystem();
};

