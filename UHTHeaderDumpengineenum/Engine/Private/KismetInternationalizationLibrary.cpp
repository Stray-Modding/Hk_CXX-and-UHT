#include "KismetInternationalizationLibrary.h"

bool UKismetInternationalizationLibrary::SetCurrentLocale(const FString& Culture, const bool SaveToConfig) {
    return false;
}

bool UKismetInternationalizationLibrary::SetCurrentLanguageAndLocale(const FString& Culture, const bool SaveToConfig) {
    return false;
}

bool UKismetInternationalizationLibrary::SetCurrentLanguage(const FString& Culture, const bool SaveToConfig) {
    return false;
}

bool UKismetInternationalizationLibrary::SetCurrentCulture(const FString& Culture, const bool SaveToConfig) {
    return false;
}

bool UKismetInternationalizationLibrary::SetCurrentAssetGroupCulture(const FName AssetGroup, const FString& Culture, const bool SaveToConfig) {
    return false;
}

FString UKismetInternationalizationLibrary::GetSuitableCulture(const TArray<FString>& AvailableCultures, const FString& CultureToMatch, const FString& FallbackCulture) {
    return TEXT("");
}

FString UKismetInternationalizationLibrary::GetNativeCulture(const ELocalizedTextSourceCategory TextCategory) {
    return TEXT("");
}

TArray<FString> UKismetInternationalizationLibrary::GetLocalizedCultures(const bool IncludeGame, const bool IncludeEngine, const bool IncludeEditor, const bool IncludeAdditional) {
    return TArray<FString>();
}

FString UKismetInternationalizationLibrary::GetCurrentLocale() {
    return TEXT("");
}

FString UKismetInternationalizationLibrary::GetCurrentLanguage() {
    return TEXT("");
}

FString UKismetInternationalizationLibrary::GetCurrentCulture() {
    return TEXT("");
}

FString UKismetInternationalizationLibrary::GetCurrentAssetGroupCulture(const FName AssetGroup) {
    return TEXT("");
}

FString UKismetInternationalizationLibrary::GetCultureDisplayName(const FString& Culture, const bool Localized) {
    return TEXT("");
}

void UKismetInternationalizationLibrary::ClearCurrentAssetGroupCulture(const FName AssetGroup, const bool SaveToConfig) {
}

UKismetInternationalizationLibrary::UKismetInternationalizationLibrary() {
}

