#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "AnimNode_CustomProperty.generated.h"

class UObject;

USTRUCT()
struct ENGINE_API FAnimNode_CustomProperty : public FAnimNode_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FName> SourcePropertyNames;
    
    UPROPERTY()
    TArray<FName> DestPropertyNames;
    
    UPROPERTY(Transient)
    UObject* TargetInstance;
    
public:
    FAnimNode_CustomProperty();
};

