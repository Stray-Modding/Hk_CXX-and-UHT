#pragma once
#include "CoreMinimal.h"
#include "ParameterChannelNames.generated.h"

USTRUCT()
struct FParameterChannelNames {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText R;
    
    UPROPERTY(EditAnywhere)
    FText G;
    
    UPROPERTY(EditAnywhere)
    FText B;
    
    UPROPERTY(EditAnywhere)
    FText A;
    
    ENGINE_API FParameterChannelNames();
};

