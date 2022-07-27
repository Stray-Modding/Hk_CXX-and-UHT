#pragma once
#include "CoreMinimal.h"
#include "EPostCopyOperation.h"
#include "ExposedValueCopyRecord.generated.h"

USTRUCT(BlueprintType)
struct FExposedValueCopyRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 CopyIndex;
    
    UPROPERTY()
    EPostCopyOperation PostCopyOperation;
    
    ENGINE_API FExposedValueCopyRecord();
};

