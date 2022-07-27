#pragma once
#include "CoreMinimal.h"
#include "CurveTableRowHandle.generated.h"

class UCurveTable;

USTRUCT(BlueprintType)
struct ENGINE_API FCurveTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveTable* CurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RowName;
    
    FCurveTableRowHandle();
};

