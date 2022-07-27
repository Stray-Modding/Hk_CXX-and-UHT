#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NavCollisionBase.generated.h"

UCLASS(Abstract)
class ENGINE_API UNavCollisionBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    uint8 bIsDynamicObstacle: 1;
    
public:
    UNavCollisionBase();
};

