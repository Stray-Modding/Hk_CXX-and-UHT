#pragma once
#include "CoreMinimal.h"
#include "AnimCompress.h"
#include "AnimCompress_RemoveEverySecondKey.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MinKeys;
    
    UPROPERTY(EditAnywhere)
    uint8 bStartAtSecondKey: 1;
    
    UAnimCompress_RemoveEverySecondKey();
};

