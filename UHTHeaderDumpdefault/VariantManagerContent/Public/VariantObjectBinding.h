#pragma once
#include "CoreMinimal.h"
#include "FunctionCaller.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "VariantObjectBinding.generated.h"

class UPropertyValue;

UCLASS(DefaultToInstanced)
class VARIANTMANAGERCONTENT_API UVariantObjectBinding : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString CachedActorLabel;
    
    UPROPERTY()
    FSoftObjectPath ObjectPtr;
    
    UPROPERTY()
    TLazyObjectPtr<UObject> LazyObjectPtr;
    
    UPROPERTY()
    TArray<UPropertyValue*> CapturedProperties;
    
    UPROPERTY()
    TArray<FFunctionCaller> FunctionCallers;
    
public:
    UVariantObjectBinding();
};

