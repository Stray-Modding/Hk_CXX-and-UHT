#pragma once
#include "CoreMinimal.h"
#include "AnimCompress.h"
#include "AnimCompress_RemoveLinearKeys.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UAnimCompress_RemoveLinearKeys : public UAnimCompress {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxPosDiff;
    
    UPROPERTY(EditAnywhere)
    float MaxAngleDiff;
    
    UPROPERTY(EditAnywhere)
    float MaxScaleDiff;
    
    UPROPERTY(EditAnywhere)
    float MaxEffectorDiff;
    
    UPROPERTY(EditAnywhere)
    float MinEffectorDiff;
    
    UPROPERTY(EditAnywhere)
    float EffectorDiffSocket;
    
    UPROPERTY(EditAnywhere)
    float ParentKeyScale;
    
    UPROPERTY(EditAnywhere)
    uint8 bRetarget: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bActuallyFilterLinearKeys: 1;
    
    UAnimCompress_RemoveLinearKeys();
};

