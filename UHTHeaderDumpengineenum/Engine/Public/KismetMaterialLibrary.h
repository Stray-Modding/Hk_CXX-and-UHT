#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "EMIDCreationFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "KismetMaterialLibrary.generated.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;
class UObject;
class UMaterialParameterCollection;

UCLASS(BlueprintType, MinimalAPI)
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetMaterialLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, const FLinearColor& ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, float ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor GetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    static float GetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* CreateDynamicMaterialInstance(UObject* WorldContextObject, UMaterialInterface* Parent, FName OptionalName, EMIDCreationFlags CreationFlags);
    
};

