#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "KismetArrayLibrary.generated.h"

class UObject;
class AActor;

UCLASS(BlueprintType)
class ENGINE_API UKismetArrayLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetArrayLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetArrayPropertyByName(UObject* Object, FName PropertyName, const TArray<int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void FilterArray(const TArray<AActor*>& TargetArray, TSubclassOf<AActor> FilterClass, TArray<AActor*>& FilteredArray);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Swap(const TArray<int32>& TargetArray, int32 FirstIndex, int32 SecondIndex);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Shuffle(const TArray<int32>& TargetArray);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Set(const TArray<int32>& TargetArray, int32 Index, const int32& Item, bool bSizeToFit);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Reverse(const TArray<int32>& TargetArray);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Resize(const TArray<int32>& TargetArray, int32 Size);
    
    UFUNCTION(BlueprintCallable)
    static bool Array_RemoveItem(const TArray<int32>& TargetArray, const int32& Item);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Remove(const TArray<int32>& TargetArray, int32 IndexToRemove);
    
    UFUNCTION(BlueprintPure)
    static void Array_RandomFromStream(const TArray<int32>& TargetArray, UPARAM(Ref) FRandomStream& RandomStream, int32& OutItem, int32& OutIndex);
    
    UFUNCTION(BlueprintPure)
    static void Array_Random(const TArray<int32>& TargetArray, int32& OutItem, int32& OutIndex);
    
    UFUNCTION(BlueprintPure)
    static int32 Array_Length(const TArray<int32>& TargetArray);
    
    UFUNCTION(BlueprintPure)
    static int32 Array_LastIndex(const TArray<int32>& TargetArray);
    
    UFUNCTION(BlueprintPure)
    static bool Array_IsValidIndex(const TArray<int32>& TargetArray, int32 IndexToTest);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Insert(const TArray<int32>& TargetArray, const int32& NewItem, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static bool Array_Identical(const TArray<int32>& ArrayA, const TArray<int32>& ArrayB);
    
    UFUNCTION(BlueprintPure)
    static void Array_Get(const TArray<int32>& TargetArray, int32 Index, int32& Item);
    
    UFUNCTION(BlueprintPure)
    static int32 Array_Find(const TArray<int32>& TargetArray, const int32& ItemToFind);
    
    UFUNCTION(BlueprintPure)
    static bool Array_Contains(const TArray<int32>& TargetArray, const int32& ItemToFind);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Clear(const TArray<int32>& TargetArray);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Append(const TArray<int32>& TargetArray, const TArray<int32>& SourceArray);
    
    UFUNCTION(BlueprintCallable)
    static int32 Array_AddUnique(const TArray<int32>& TargetArray, const int32& NewItem);
    
    UFUNCTION(BlueprintCallable)
    static int32 Array_Add(const TArray<int32>& TargetArray, const int32& NewItem);
    
};

