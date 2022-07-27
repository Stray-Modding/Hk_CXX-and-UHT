#include "BlueprintMapLibrary.h"

class UObject;

void UBlueprintMapLibrary::SetMapPropertyByName(UObject* Object, FName PropertyName, const TMap<int32, int32>& Value) {
}

void UBlueprintMapLibrary::Map_Values(const TMap<int32, int32>& TargetMap, TArray<int32>& Values) {
}

bool UBlueprintMapLibrary::Map_Remove(const TMap<int32, int32>& TargetMap, const int32& Key) {
    return false;
}

int32 UBlueprintMapLibrary::Map_Length(const TMap<int32, int32>& TargetMap) {
    return 0;
}

void UBlueprintMapLibrary::Map_Keys(const TMap<int32, int32>& TargetMap, TArray<int32>& Keys) {
}

bool UBlueprintMapLibrary::Map_Find(const TMap<int32, int32>& TargetMap, const int32& Key, int32& Value) {
    return false;
}

bool UBlueprintMapLibrary::Map_Contains(const TMap<int32, int32>& TargetMap, const int32& Key) {
    return false;
}

void UBlueprintMapLibrary::Map_Clear(const TMap<int32, int32>& TargetMap) {
}

void UBlueprintMapLibrary::Map_Add(const TMap<int32, int32>& TargetMap, const int32& Key, const int32& Value) {
}

UBlueprintMapLibrary::UBlueprintMapLibrary() {
}

