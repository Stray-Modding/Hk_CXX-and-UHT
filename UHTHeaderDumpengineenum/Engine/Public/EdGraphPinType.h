#pragma once
#include "CoreMinimal.h"
#include "SimpleMemberReference.h"
#include "EdGraphTerminalType.h"
#include "EPinContainerType.h"
#include "EdGraphPinType.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FEdGraphPinType {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PinCategory;
    
    UPROPERTY()
    FName PinSubCategory;
    
    UPROPERTY()
    TWeakObjectPtr<UObject> PinSubCategoryObject;
    
    UPROPERTY()
    FSimpleMemberReference PinSubCategoryMemberReference;
    
    UPROPERTY()
    FEdGraphTerminalType PinValueType;
    
    UPROPERTY()
    EPinContainerType ContainerType;
    
private:
    UPROPERTY()
    uint8 bIsArray: 1;
    
public:
    UPROPERTY()
    uint8 bIsReference: 1;
    
    UPROPERTY()
    uint8 bIsConst: 1;
    
    UPROPERTY()
    uint8 bIsWeakPointer: 1;
    
    UPROPERTY()
    uint8 bIsUObjectWrapper: 1;
    
    ENGINE_API FEdGraphPinType();
};

