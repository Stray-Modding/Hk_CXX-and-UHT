#pragma once
#include "CoreMinimal.h"
#include "EdGraphTerminalType.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct ENGINE_API FEdGraphTerminalType {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName TerminalCategory;
    
    UPROPERTY()
    FName TerminalSubCategory;
    
    UPROPERTY()
    TWeakObjectPtr<UObject> TerminalSubCategoryObject;
    
    UPROPERTY()
    bool bTerminalIsConst;
    
    UPROPERTY()
    bool bTerminalIsWeakPointer;
    
    UPROPERTY()
    bool bTerminalIsUObjectWrapper;
    
    FEdGraphTerminalType();
};

