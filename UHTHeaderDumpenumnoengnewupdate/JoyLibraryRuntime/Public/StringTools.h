#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "StringTools.generated.h"

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UStringTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStringTools();
    UFUNCTION(BlueprintPure)
    static FString ReplaceStringTableTokens(const FString& _string, const FString& _defaultNamespace);
    
    UFUNCTION(BlueprintPure)
    static FString GetSubstringWithoutMarkup(const FString& _string, int32 _startIndex, int32 _length);
    
    UFUNCTION(BlueprintPure)
    static FString GetSubstringWhilePreservingMarkup(const FString& _string, int32 _startIndex, int32 _length);
    
};
