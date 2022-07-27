#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState.h"
#include "AnimNotifyState_DisableRootMotion.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_DisableRootMotion : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_DisableRootMotion();
};

