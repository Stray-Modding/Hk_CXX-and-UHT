#pragma once
#include "CoreMinimal.h"
#include "BPVariableMetaDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FBPVariableMetaDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName DataKey;
    
    UPROPERTY(EditAnywhere)
    FString DataValue;
    
    ENGINE_API FBPVariableMetaDataEntry();
};

