#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "CollectionParameterBase.generated.h"

USTRUCT()
struct FCollectionParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY()
    FGuid ID;
    
    ENGINE_API FCollectionParameterBase();
};

