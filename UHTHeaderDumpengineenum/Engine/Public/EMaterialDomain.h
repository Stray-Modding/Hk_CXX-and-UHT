#pragma once
#include "CoreMinimal.h"
#include "EMaterialDomain.generated.h"

UENUM(BlueprintType)
enum EMaterialDomain {
    MD_Surface,
    MD_DeferredDecal,
    MD_LightFunction,
    MD_Volume,
    MD_PostProcess,
    MD_UI,
    MD_RuntimeVirtualTexture,
    MD_MAX UMETA(Hidden),
};

