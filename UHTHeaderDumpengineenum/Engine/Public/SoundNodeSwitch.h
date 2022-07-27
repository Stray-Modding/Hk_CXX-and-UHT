#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeSwitch.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeSwitch : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName IntParameterName;
    
    USoundNodeSwitch();
};

