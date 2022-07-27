#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "StructSerializerObjectTestStruct.generated.h"

class UMetaData;
class UObject;

USTRUCT(BlueprintType)
struct FStructSerializerObjectTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* Class;
    
    UPROPERTY()
    TSubclassOf<UMetaData> SubClass;
    
    UPROPERTY()
    TSoftClassPtr<UMetaData> SoftClass;
    
    UPROPERTY()
    UObject* Object;
    
    UPROPERTY()
    TWeakObjectPtr<UMetaData> WeakObject;
    
    UPROPERTY()
    TSoftObjectPtr<UMetaData> SoftObject;
    
    UPROPERTY()
    FSoftClassPath ClassPath;
    
    UPROPERTY()
    FSoftObjectPath ObjectPath;
    
    SERIALIZATION_API FStructSerializerObjectTestStruct();
};

