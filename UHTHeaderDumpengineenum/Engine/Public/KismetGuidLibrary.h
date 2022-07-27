#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "KismetGuidLibrary.generated.h"

UCLASS(BlueprintType)
class ENGINE_API UKismetGuidLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetGuidLibrary();
    UFUNCTION(BlueprintPure)
    static void Parse_StringToGuid(const FString& GuidString, FGuid& OutGuid, bool& Success);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_GuidGuid(const FGuid& A, const FGuid& B);
    
    UFUNCTION(BlueprintPure)
    static FGuid NewGuid();
    
    UFUNCTION(BlueprintPure)
    static bool IsValid_Guid(const FGuid& InGuid);
    
    UFUNCTION(BlueprintCallable)
    static void Invalidate_Guid(UPARAM(Ref) FGuid& InGuid);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_GuidGuid(const FGuid& A, const FGuid& B);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_GuidToString(const FGuid& InGuid);
    
};

