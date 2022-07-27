#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialFunctionInfo.generated.h"

class UMaterialFunctionInterface;

USTRUCT(BlueprintType)
struct FMaterialFunctionInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid StateId;
    
    UPROPERTY()
    UMaterialFunctionInterface* Function;
    
    ENGINE_API FMaterialFunctionInfo();
};

