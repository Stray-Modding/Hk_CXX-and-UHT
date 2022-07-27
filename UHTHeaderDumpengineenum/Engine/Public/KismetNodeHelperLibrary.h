#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "KismetNodeHelperLibrary.generated.h"

class UEnum;

UCLASS(BlueprintType)
class ENGINE_API UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetNodeHelperLibrary();
    UFUNCTION(BlueprintCallable)
    static void MarkBit(int32& Data, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool HasUnmarkedBit(int32 Data, int32 NumBits);
    
    UFUNCTION(BlueprintCallable)
    static bool HasMarkedBit(int32 Data, int32 NumBits);
    
    UFUNCTION(BlueprintPure)
    static uint8 GetValidValue(const UEnum* Enum, uint8 EnumeratorValue);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits, bool bRandom);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRandomUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFirstUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits);
    
    UFUNCTION(BlueprintPure)
    static uint8 GetEnumeratorValueFromIndex(const UEnum* Enum, uint8 EnumeratorIndex);
    
    UFUNCTION(BlueprintPure)
    static FString GetEnumeratorUserFriendlyName(const UEnum* Enum, uint8 EnumeratorValue);
    
    UFUNCTION(BlueprintPure)
    static FName GetEnumeratorName(const UEnum* Enum, uint8 EnumeratorValue);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBit(int32& Data, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllBits(int32& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool BitIsMarked(int32 Data, int32 Index);
    
};

