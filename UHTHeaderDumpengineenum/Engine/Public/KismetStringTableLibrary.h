#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "KismetStringTableLibrary.generated.h"

UCLASS(BlueprintType)
class ENGINE_API UKismetStringTableLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetStringTableLibrary();
    UFUNCTION(BlueprintPure)
    static bool IsRegisteredTableId(const FName TableId);
    
    UFUNCTION(BlueprintPure)
    static bool IsRegisteredTableEntry(const FName TableId, const FString& Key);
    
    UFUNCTION(BlueprintPure)
    static FString GetTableNamespace(const FName TableId);
    
    UFUNCTION(BlueprintPure)
    static FString GetTableEntrySourceString(const FName TableId, const FString& Key);
    
    UFUNCTION(BlueprintPure)
    static FString GetTableEntryMetaData(const FName TableId, const FString& Key, const FName MetaDataId);
    
    UFUNCTION(BlueprintPure)
    static TArray<FName> GetRegisteredStringTables();
    
    UFUNCTION(BlueprintPure)
    static TArray<FName> GetMetaDataIdsFromStringTableEntry(const FName TableId, const FString& Key);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetKeysFromStringTable(const FName TableId);
    
};

