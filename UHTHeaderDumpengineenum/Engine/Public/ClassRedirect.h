#pragma once
#include "CoreMinimal.h"
#include "ClassRedirect.generated.h"

USTRUCT(BlueprintType)
struct FClassRedirect {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ObjectName;
    
    UPROPERTY()
    FName OldClassName;
    
    UPROPERTY()
    FName NewClassName;
    
    UPROPERTY()
    FName OldSubobjName;
    
    UPROPERTY()
    FName NewSubobjName;
    
    UPROPERTY()
    FName NewClassClass;
    
    UPROPERTY()
    FName NewClassPackage;
    
    UPROPERTY()
    bool InstanceOnly;
    
    ENGINE_API FClassRedirect();
};

