#include "KismetArrayLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class AActor;

void UKismetArrayLibrary::SetArrayPropertyByName(UObject* Object, FName PropertyName, const TArray<int32>& Value) {
}

void UKismetArrayLibrary::FilterArray(const TArray<AActor*>& TargetArray, TSubclassOf<AActor> FilterClass, TArray<AActor*>& FilteredArray) {
}

void UKismetArrayLibrary::Array_Swap(const TArray<int32>& TargetArray, int32 FirstIndex, int32 SecondIndex) {
}

void UKismetArrayLibrary::Array_Shuffle(const TArray<int32>& TargetArray) {
}

void UKismetArrayLibrary::Array_Set(const TArray<int32>& TargetArray, int32 Index, const int32& Item, bool bSizeToFit) {
}

void UKismetArrayLibrary::Array_Reverse(const TArray<int32>& TargetArray) {
}

void UKismetArrayLibrary::Array_Resize(const TArray<int32>& TargetArray, int32 Size) {
}

bool UKismetArrayLibrary::Array_RemoveItem(const TArray<int32>& TargetArray, const int32& Item) {
    return false;
}

void UKismetArrayLibrary::Array_Remove(const TArray<int32>& TargetArray, int32 IndexToRemove) {
}

void UKismetArrayLibrary::Array_RandomFromStream(const TArray<int32>& TargetArray, FRandomStream& RandomStream, int32& OutItem, int32& OutIndex) {
}

void UKismetArrayLibrary::Array_Random(const TArray<int32>& TargetArray, int32& OutItem, int32& OutIndex) {
}

int32 UKismetArrayLibrary::Array_Length(const TArray<int32>& TargetArray) {
    return 0;
}

int32 UKismetArrayLibrary::Array_LastIndex(const TArray<int32>& TargetArray) {
    return 0;
}

bool UKismetArrayLibrary::Array_IsValidIndex(const TArray<int32>& TargetArray, int32 IndexToTest) {
    return false;
}

void UKismetArrayLibrary::Array_Insert(const TArray<int32>& TargetArray, const int32& NewItem, int32 Index) {
}

bool UKismetArrayLibrary::Array_Identical(const TArray<int32>& ArrayA, const TArray<int32>& ArrayB) {
    return false;
}

void UKismetArrayLibrary::Array_Get(const TArray<int32>& TargetArray, int32 Index, int32& Item) {
}

int32 UKismetArrayLibrary::Array_Find(const TArray<int32>& TargetArray, const int32& ItemToFind) {
    return 0;
}

bool UKismetArrayLibrary::Array_Contains(const TArray<int32>& TargetArray, const int32& ItemToFind) {
    return false;
}

void UKismetArrayLibrary::Array_Clear(const TArray<int32>& TargetArray) {
}

void UKismetArrayLibrary::Array_Append(const TArray<int32>& TargetArray, const TArray<int32>& SourceArray) {
}

int32 UKismetArrayLibrary::Array_AddUnique(const TArray<int32>& TargetArray, const int32& NewItem) {
    return 0;
}

int32 UKismetArrayLibrary::Array_Add(const TArray<int32>& TargetArray, const int32& NewItem) {
    return 0;
}

UKismetArrayLibrary::UKismetArrayLibrary() {
}

