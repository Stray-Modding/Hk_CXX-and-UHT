#include "DataTableFunctionLibrary.h"

class UDataTable;
class UCurveTable;

void UDataTableFunctionLibrary::GetDataTableRowNames(UDataTable* Table, TArray<FName>& OutRowNames) {
}

bool UDataTableFunctionLibrary::GetDataTableRowFromName(UDataTable* Table, FName RowName, FTableRowBase& OutRow) {
    return false;
}

TArray<FString> UDataTableFunctionLibrary::GetDataTableColumnAsString(const UDataTable* DataTable, FName PropertyName) {
    return TArray<FString>();
}

void UDataTableFunctionLibrary::EvaluateCurveTableRow(UCurveTable* CurveTable, FName RowName, float InXY, TEnumAsByte<EEvaluateCurveTableResult::Type>& OutResult, float& OutXY, const FString& ContextString) {
}

bool UDataTableFunctionLibrary::DoesDataTableRowExist(UDataTable* Table, FName RowName) {
    return false;
}

UDataTableFunctionLibrary::UDataTableFunctionLibrary() {
}

