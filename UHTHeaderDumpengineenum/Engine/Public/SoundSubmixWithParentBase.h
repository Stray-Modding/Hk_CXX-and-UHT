#pragma once
#include "CoreMinimal.h"
#include "SoundSubmixBase.h"
#include "SoundSubmixWithParentBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class ENGINE_API USoundSubmixWithParentBase : public USoundSubmixBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    USoundSubmixBase* ParentSubmix;
    
    USoundSubmixWithParentBase();
};

