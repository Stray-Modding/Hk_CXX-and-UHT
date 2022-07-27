#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CapturedPropSegment.h"
#include "EPropertyValueCategory.h"
#include "PropertyValue.generated.h"

UCLASS(BlueprintType)
class VARIANTMANAGERCONTENT_API UPropertyValue : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<TFieldPath<FProperty>> Properties;
    
    UPROPERTY()
    TArray<int32> PropertyIndices;
    
    UPROPERTY()
    TArray<FCapturedPropSegment> CapturedPropSegments;
    
    UPROPERTY()
    FString FullDisplayString;
    
    UPROPERTY()
    FName PropertySetterName;
    
    UPROPERTY()
    TMap<FString, FString> PropertySetterParameterDefaults;
    
    UPROPERTY()
    bool bHasRecordedData;
    
    UPROPERTY()
    UClass* LeafPropertyClass;
    
    UPROPERTY()
    TArray<uint8> ValueBytes;
    
    UPROPERTY()
    EPropertyValueCategory PropCategory;
    
public:
    UPropertyValue();
    UFUNCTION(BlueprintPure)
    bool HasRecordedData() const;
    
    UFUNCTION(BlueprintPure)
    FText GetPropertyTooltip() const;
    
    UFUNCTION(BlueprintPure)
    FString GetFullDisplayString() const;
    
};

