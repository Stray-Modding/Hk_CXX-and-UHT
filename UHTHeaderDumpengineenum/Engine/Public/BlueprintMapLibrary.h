#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "BlueprintMapLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class ENGINE_API UBlueprintMapLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintMapLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetMapPropertyByName(UObject* Object, FName PropertyName, const TMap<int32, int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void Map_Values(const TMap<int32, int32>& TargetMap, TArray<int32>& Values);
    
    UFUNCTION(BlueprintCallable)
    static bool Map_Remove(const TMap<int32, int32>& TargetMap, const int32& Key);
    
    UFUNCTION(BlueprintPure)
    static int32 Map_Length(const TMap<int32, int32>& TargetMap);
    
    UFUNCTION(BlueprintCallable)
    static void Map_Keys(const TMap<int32, int32>& TargetMap, TArray<int32>& Keys);
    
    UFUNCTION(BlueprintPure)
    static bool Map_Find(const TMap<int32, int32>& TargetMap, const int32& Key, int32& Value);
    
    UFUNCTION(BlueprintPure)
    static bool Map_Contains(const TMap<int32, int32>& TargetMap, const int32& Key);
    
    UFUNCTION(BlueprintCallable)
    static void Map_Clear(const TMap<int32, int32>& TargetMap);
    
    UFUNCTION(BlueprintCallable)
    static void Map_Add(const TMap<int32, int32>& TargetMap, const int32& Key, const int32& Value);
    
};

