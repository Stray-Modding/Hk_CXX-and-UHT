#pragma once
#include "CoreMinimal.h"
#include "AnimCompress.h"
#include "AnimCompress_RemoveTrivialKeys.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxPosDiff;
    
    UPROPERTY(EditAnywhere)
    float MaxAngleDiff;
    
    UPROPERTY(EditAnywhere)
    float MaxScaleDiff;
    
    UAnimCompress_RemoveTrivialKeys();
};

