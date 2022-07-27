#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SplineRailConnection.generated.h"

class USplineRailComponent;
class USphereComponent;

UCLASS()
class USplineRailConnection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USplineRailComponent* Rail;
    
    UPROPERTY(Export)
    USphereComponent* Collider;
    
    USplineRailConnection();
};

