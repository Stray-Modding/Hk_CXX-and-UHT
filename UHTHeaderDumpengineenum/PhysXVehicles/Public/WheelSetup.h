#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WheelSetup.generated.h"

class UVehicleWheel;

USTRUCT(BlueprintType)
struct PHYSXVEHICLES_API FWheelSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UVehicleWheel> WheelClass;
    
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    FVector AdditionalOffset;
    
    UPROPERTY(EditAnywhere)
    bool bDisableSteering;
    
    FWheelSetup();
};

