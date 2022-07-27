#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeGroupControl.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeGroupControl : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<int32> GroupSizes;
    
    USoundNodeGroupControl();
};

