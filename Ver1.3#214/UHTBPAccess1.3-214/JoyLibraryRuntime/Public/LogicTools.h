#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FuzzyBool.h"
#include "LogicTools.generated.h"

class UObject;

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API ULogicTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULogicTools();
    UFUNCTION(BlueprintCallable)
    static void FuzzyBoolSetTarget(UObject* WorldContextObject, UPARAM(Ref) FFuzzyBool& _fuzzyBool, bool _targetResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FuzzyBoolGetTarget(UPARAM(Ref) FFuzzyBool& _fuzzyBool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FuzzyBoolGetFuzzy(UObject* WorldContextObject, UPARAM(Ref) FFuzzyBool& _fuzzyBool);
    
};

