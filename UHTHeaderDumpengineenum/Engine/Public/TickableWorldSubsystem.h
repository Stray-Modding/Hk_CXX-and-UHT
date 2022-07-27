#pragma once
#include "CoreMinimal.h"
#include "WorldSubsystem.h"
#include "TickableWorldSubsystem.generated.h"

UCLASS(Abstract)
class ENGINE_API UTickableWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UTickableWorldSubsystem();
};

