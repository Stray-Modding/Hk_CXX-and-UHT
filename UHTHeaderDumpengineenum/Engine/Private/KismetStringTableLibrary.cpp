#include "KismetStringTableLibrary.h"

bool UKismetStringTableLibrary::IsRegisteredTableId(const FName TableId) {
    return false;
}

bool UKismetStringTableLibrary::IsRegisteredTableEntry(const FName TableId, const FString& Key) {
    return false;
}

FString UKismetStringTableLibrary::GetTableNamespace(const FName TableId) {
    return TEXT("");
}

FString UKismetStringTableLibrary::GetTableEntrySourceString(const FName TableId, const FString& Key) {
    return TEXT("");
}

FString UKismetStringTableLibrary::GetTableEntryMetaData(const FName TableId, const FString& Key, const FName MetaDataId) {
    return TEXT("");
}

TArray<FName> UKismetStringTableLibrary::GetRegisteredStringTables() {
    return TArray<FName>();
}

TArray<FName> UKismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry(const FName TableId, const FString& Key) {
    return TArray<FName>();
}

TArray<FString> UKismetStringTableLibrary::GetKeysFromStringTable(const FName TableId) {
    return TArray<FString>();
}

UKismetStringTableLibrary::UKismetStringTableLibrary() {
}

