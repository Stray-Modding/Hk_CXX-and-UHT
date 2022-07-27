#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MaterialParameterCollectionInstance.generated.h"

class UMaterialParameterCollection;

UCLASS()
class ENGINE_API UMaterialParameterCollectionInstance : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMaterialParameterCollection* Collection;
    
public:
    UMaterialParameterCollectionInstance();
};

