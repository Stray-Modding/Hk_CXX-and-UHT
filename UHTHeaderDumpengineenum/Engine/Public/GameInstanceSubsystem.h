#pragma once
#include "CoreMinimal.h"
#include "Subsystem.h"
#include "GameInstanceSubsystem.generated.h"

UCLASS(Abstract, Within=GameInstance)
class ENGINE_API UGameInstanceSubsystem : public USubsystem {
    GENERATED_BODY()
public:
    UGameInstanceSubsystem();
};

