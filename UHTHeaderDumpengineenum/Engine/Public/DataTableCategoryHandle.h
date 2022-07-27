#pragma once
#include "CoreMinimal.h"
#include "DataTableCategoryHandle.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct ENGINE_API FDataTableCategoryHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ColumnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RowContents;
    
    FDataTableCategoryHandle();
};

