#pragma once
#include "CoreMinimal.h"
#include "Subsystem.h"
#include "LocalPlayerSubsystem.generated.h"

UCLASS(Abstract, Within=LocalPlayer)
class ENGINE_API ULocalPlayerSubsystem : public USubsystem {
    GENERATED_BODY()
public:
    ULocalPlayerSubsystem();
};

