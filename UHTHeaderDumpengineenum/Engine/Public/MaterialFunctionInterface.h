#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EMaterialFunctionUsage.h"
#include "MaterialFunctionInterface.generated.h"

UCLASS(Abstract, MinimalAPI)
class UMaterialFunctionInterface : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(DuplicateTransient)
    FGuid StateId;
    
protected:
    UPROPERTY(AssetRegistrySearchable)
    EMaterialFunctionUsage MaterialFunctionUsage;
    
public:
    UMaterialFunctionInterface();
};

