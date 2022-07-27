#pragma once
#include "CoreMinimal.h"
#include "CollectionParameterBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CollectionVectorParameter.generated.h"

USTRUCT(BlueprintType)
struct FCollectionVectorParameter : public FCollectionParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor DefaultValue;
    
    ENGINE_API FCollectionVectorParameter();
};

