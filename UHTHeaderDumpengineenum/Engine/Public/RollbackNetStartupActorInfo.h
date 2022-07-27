#pragma once
#include "CoreMinimal.h"
#include "RollbackNetStartupActorInfo.generated.h"

class UObject;
class ULevel;

USTRUCT(BlueprintType)
struct FRollbackNetStartupActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* Archetype;
    
    UPROPERTY()
    ULevel* Level;
    
    UPROPERTY()
    TArray<UObject*> ObjReferences;
    
    ENGINE_API FRollbackNetStartupActorInfo();
};

