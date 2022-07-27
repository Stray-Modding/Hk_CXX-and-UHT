#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ComponentKey.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FComponentKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UClass* OwnerClass;
    
    UPROPERTY()
    FName SCSVariableName;
    
    UPROPERTY()
    FGuid AssociatedGuid;
    
public:
    FComponentKey();
};

