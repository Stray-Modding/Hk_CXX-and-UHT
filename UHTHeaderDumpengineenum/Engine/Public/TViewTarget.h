#pragma once
#include "CoreMinimal.h"
#include "MinimalViewInfo.h"
#include "TViewTarget.generated.h"

class AActor;
class APlayerState;

USTRUCT(BlueprintType)
struct ENGINE_API FTViewTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMinimalViewInfo POV;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APlayerState* PlayerState;
    
public:
    FTViewTarget();
};

