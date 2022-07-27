#pragma once
#include "CoreMinimal.h"
#include "CollectionParameterBase.h"
#include "CollectionScalarParameter.generated.h"

USTRUCT(BlueprintType)
struct FCollectionScalarParameter : public FCollectionParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DefaultValue;
    
    ENGINE_API FCollectionScalarParameter();
};

