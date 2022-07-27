#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "CollectionVectorParameter.h"
#include "CollectionScalarParameter.h"
#include "MaterialParameterCollection.generated.h"

UCLASS(MinimalAPI)
class UMaterialParameterCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(DuplicateTransient)
    FGuid StateId;
    
    UPROPERTY(EditAnywhere)
    TArray<FCollectionScalarParameter> ScalarParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FCollectionVectorParameter> VectorParameters;
    
    UMaterialParameterCollection();
};

