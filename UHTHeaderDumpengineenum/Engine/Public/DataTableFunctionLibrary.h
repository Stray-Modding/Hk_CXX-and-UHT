#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "TableRowBase.h"
#include "EEvaluateCurveTableResult.h"
#include "DataTableFunctionLibrary.generated.h"

class UDataTable;
class UCurveTable;

UCLASS(BlueprintType)
class ENGINE_API UDataTableFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDataTableFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void GetDataTableRowNames(UDataTable* Table, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDataTableRowFromName(UDataTable* Table, FName RowName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetDataTableColumnAsString(const UDataTable* DataTable, FName PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static void EvaluateCurveTableRow(UCurveTable* CurveTable, FName RowName, float InXY, TEnumAsByte<EEvaluateCurveTableResult::Type>& OutResult, float& OutXY, const FString& ContextString);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesDataTableRowExist(UDataTable* Table, FName RowName);
    
};

