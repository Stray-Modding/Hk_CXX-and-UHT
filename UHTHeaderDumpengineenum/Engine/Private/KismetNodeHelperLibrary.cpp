#include "KismetNodeHelperLibrary.h"

class UEnum;

void UKismetNodeHelperLibrary::MarkBit(int32& Data, int32 Index) {
}

bool UKismetNodeHelperLibrary::HasUnmarkedBit(int32 Data, int32 NumBits) {
    return false;
}

bool UKismetNodeHelperLibrary::HasMarkedBit(int32 Data, int32 NumBits) {
    return false;
}

uint8 UKismetNodeHelperLibrary::GetValidValue(const UEnum* Enum, uint8 EnumeratorValue) {
    return 0;
}

int32 UKismetNodeHelperLibrary::GetUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits, bool bRandom) {
    return 0;
}

int32 UKismetNodeHelperLibrary::GetRandomUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits) {
    return 0;
}

int32 UKismetNodeHelperLibrary::GetFirstUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits) {
    return 0;
}

uint8 UKismetNodeHelperLibrary::GetEnumeratorValueFromIndex(const UEnum* Enum, uint8 EnumeratorIndex) {
    return 0;
}

FString UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(const UEnum* Enum, uint8 EnumeratorValue) {
    return TEXT("");
}

FName UKismetNodeHelperLibrary::GetEnumeratorName(const UEnum* Enum, uint8 EnumeratorValue) {
    return NAME_None;
}

void UKismetNodeHelperLibrary::ClearBit(int32& Data, int32 Index) {
}

void UKismetNodeHelperLibrary::ClearAllBits(int32& Data) {
}

bool UKismetNodeHelperLibrary::BitIsMarked(int32 Data, int32 Index) {
    return false;
}

UKismetNodeHelperLibrary::UKismetNodeHelperLibrary() {
}

