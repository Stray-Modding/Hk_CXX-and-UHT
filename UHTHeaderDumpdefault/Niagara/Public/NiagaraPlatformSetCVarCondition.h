#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSetCVarCondition.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraPlatformSetCVarCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CVarName;
    
    UPROPERTY(EditAnywhere)
    bool Value;
    
    UPROPERTY(EditAnywhere)
    int32 MinInt;
    
    UPROPERTY(EditAnywhere)
    int32 MaxInt;
    
    UPROPERTY(EditAnywhere)
    float MinFloat;
    
    UPROPERTY(EditAnywhere)
    float MaxFloat;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseMinInt: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseMaxInt: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseMinFloat: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseMaxFloat: 1;
    
    FNiagaraPlatformSetCVarCondition();
};

