#include "KismetGuidLibrary.h"

void UKismetGuidLibrary::Parse_StringToGuid(const FString& GuidString, FGuid& OutGuid, bool& Success) {
}

bool UKismetGuidLibrary::NotEqual_GuidGuid(const FGuid& A, const FGuid& B) {
    return false;
}

FGuid UKismetGuidLibrary::NewGuid() {
    return FGuid{};
}

bool UKismetGuidLibrary::IsValid_Guid(const FGuid& InGuid) {
    return false;
}

void UKismetGuidLibrary::Invalidate_Guid(FGuid& InGuid) {
}

bool UKismetGuidLibrary::EqualEqual_GuidGuid(const FGuid& A, const FGuid& B) {
    return false;
}

FString UKismetGuidLibrary::Conv_GuidToString(const FGuid& InGuid) {
    return TEXT("");
}

UKismetGuidLibrary::UKismetGuidLibrary() {
}

