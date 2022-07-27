#pragma once
#include "CoreMinimal.h"
#include "DataAsset.h"
#include "TireType.generated.h"

UCLASS()
class ENGINE_API UTireType : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float FrictionScale;
    
    UTireType();
};

