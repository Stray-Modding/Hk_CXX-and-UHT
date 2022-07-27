#pragma once
#include "CoreMinimal.h"
#include "FDataDrivenCVarType.h"
#include "DataDrivenConsoleVariable.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FDataDrivenConsoleVariable {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FDataDrivenCVarType Type;
    
    UPROPERTY(Config, EditAnywhere)
    FString Name;
    
    UPROPERTY(Config, EditAnywhere)
    FString Tooltip;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultValueFloat;
    
    UPROPERTY(Config, EditAnywhere)
    int32 DefaultValueInt;
    
    UPROPERTY(Config, EditAnywhere)
    bool DefaultValueBool;
    
    FDataDrivenConsoleVariable();
};

