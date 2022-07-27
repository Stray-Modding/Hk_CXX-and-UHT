#pragma once
#include "CoreMinimal.h"
#include "EViewTargetBlendFunction.h"
#include "ViewTargetTransitionParams.generated.h"

USTRUCT(BlueprintType)
struct FViewTargetTransitionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EViewTargetBlendFunction> BlendFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bLockOutgoing: 1;
    
    ENGINE_API FViewTargetTransitionParams();
};

