#pragma once
#include "CoreMinimal.h"
#include "WheeledVehicleMovementComponent.h"
#include "VehicleDifferential4WData.h"
#include "VehicleEngineData.h"
#include "VehicleTransmissionData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "WheeledVehicleMovementComponent4W.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHYSXVEHICLES_API UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleEngineData EngineSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleDifferential4WData DifferentialSetup;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AckermannAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleTransmissionData TransmissionSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SteeringCurve;
    
    UWheeledVehicleMovementComponent4W();
};

