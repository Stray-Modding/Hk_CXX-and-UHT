#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeBranch.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeBranch : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoolParameterName;
    
    USoundNodeBranch();
};

