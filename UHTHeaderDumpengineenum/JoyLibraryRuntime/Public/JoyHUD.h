#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "JoyHUD.generated.h"

UCLASS(NonTransient)
class JOYLIBRARYRUNTIME_API AJoyHUD : public AHUD {
    GENERATED_BODY()
public:
    AJoyHUD();
};

