#pragma once
#include "CoreMinimal.h"
#include "HUD.h"
#include "DebugCameraHUD.generated.h"

UCLASS(HideDropdown, NonTransient)
class ENGINE_API ADebugCameraHUD : public AHUD {
    GENERATED_BODY()
public:
    ADebugCameraHUD();
};

