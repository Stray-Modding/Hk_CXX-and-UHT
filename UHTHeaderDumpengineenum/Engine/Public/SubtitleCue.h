#pragma once
#include "CoreMinimal.h"
#include "SubtitleCue.generated.h"

USTRUCT(BlueprintType)
struct FSubtitleCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Time;
    
    ENGINE_API FSubtitleCue();
};

