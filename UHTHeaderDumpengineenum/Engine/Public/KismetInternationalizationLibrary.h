#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ELocalizedTextSourceCategory -FallbackName=ELocalizedTextSourceCategory
#include "KismetInternationalizationLibrary.generated.h"

UCLASS(BlueprintType)
class ENGINE_API UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetInternationalizationLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SetCurrentLocale(const FString& Culture, const bool SaveToConfig);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCurrentLanguageAndLocale(const FString& Culture, const bool SaveToConfig);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCurrentLanguage(const FString& Culture, const bool SaveToConfig);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCurrentCulture(const FString& Culture, const bool SaveToConfig);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCurrentAssetGroupCulture(const FName AssetGroup, const FString& Culture, const bool SaveToConfig);
    
    UFUNCTION(BlueprintPure)
    static FString GetSuitableCulture(const TArray<FString>& AvailableCultures, const FString& CultureToMatch, const FString& FallbackCulture);
    
    UFUNCTION(BlueprintPure)
    static FString GetNativeCulture(const ELocalizedTextSourceCategory TextCategory);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetLocalizedCultures(const bool IncludeGame, const bool IncludeEngine, const bool IncludeEditor, const bool IncludeAdditional);
    
    UFUNCTION(BlueprintPure)
    static FString GetCurrentLocale();
    
    UFUNCTION(BlueprintPure)
    static FString GetCurrentLanguage();
    
    UFUNCTION(BlueprintPure)
    static FString GetCurrentCulture();
    
    UFUNCTION(BlueprintPure)
    static FString GetCurrentAssetGroupCulture(const FName AssetGroup);
    
    UFUNCTION(BlueprintPure)
    static FString GetCultureDisplayName(const FString& Culture, const bool Localized);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCurrentAssetGroupCulture(const FName AssetGroup, const bool SaveToConfig);
    
};

