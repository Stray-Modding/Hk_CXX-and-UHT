#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MagicLeapSecureStorage.generated.h"

class USaveGame;

UCLASS(BlueprintType)
class MAGICLEAPSECURESTORAGE_API UMagicLeapSecureStorage : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapSecureStorage();
    UFUNCTION(BlueprintCallable)
    static bool PutSecureVector(const FString& Key, const FVector& DataToStore);
    
    UFUNCTION(BlueprintCallable)
    static bool PutSecureTransform(const FString& Key, const FTransform& DataToStore);
    
    UFUNCTION(BlueprintCallable)
    static bool PutSecureString(const FString& Key, const FString& DataToStore);
    
    UFUNCTION(BlueprintCallable)
    static bool PutSecureSaveGame(const FString& Key, USaveGame* ObjectToStore);
    
    UFUNCTION(BlueprintCallable)
    static bool PutSecureRotator(const FString& Key, const FRotator& DataToStore);
    
    UFUNCTION(BlueprintCallable)
    static bool PutSecureInt64(const FString& Key, int64 DataToStore);
    
    UFUNCTION(BlueprintCallable)
    static bool PutSecureInt(const FString& Key, int32 DataToStore);
    
    UFUNCTION(BlueprintCallable)
    static bool PutSecureFloat(const FString& Key, float DataToStore);
    
    UFUNCTION(BlueprintCallable)
    static bool PutSecureByte(const FString& Key, uint8 DataToStore);
    
    UFUNCTION(BlueprintCallable)
    static bool PutSecureBool(const FString& Key, bool DataToStore);
    
    UFUNCTION(BlueprintCallable)
    static bool PutSecureArray(const FString& Key, const TArray<int32>& DataToStore);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSecureVector(const FString& Key, FVector& DataToRetrieve);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSecureTransform(const FString& Key, FTransform& DataToRetrieve);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSecureString(const FString& Key, FString& DataToRetrieve);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSecureSaveGame(const FString& Key, USaveGame*& ObjectToRetrieve);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSecureRotator(const FString& Key, FRotator& DataToRetrieve);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSecureInt64(const FString& Key, int64& DataToRetrieve);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSecureInt(const FString& Key, int32& DataToRetrieve);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSecureFloat(const FString& Key, float& DataToRetrieve);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSecureByte(const FString& Key, uint8& DataToRetrieve);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSecureBool(const FString& Key, bool& DataToRetrieve);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSecureArray(const FString& Key, TArray<int32>& DataToRetrieve);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteSecureData(const FString& Key);
    
};

