#pragma once
#include "CoreMinimal.h"
#include "CustomDefine.generated.h"

USTRUCT(BlueprintType)
struct FCustomDefine {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString DefineName;
    
    UPROPERTY(EditAnywhere)
    FString DefineValue;
    
    ENGINE_API FCustomDefine();
};

