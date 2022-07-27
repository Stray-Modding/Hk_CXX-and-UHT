#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EWheelSweepType.h"
#include "VehicleWheel.generated.h"

class UTireConfig;
class UStaticMesh;
class UTireType;
class UWheeledVehicleMovementComponent;

UCLASS(BlueprintType)
class PHYSXVEHICLES_API UVehicleWheel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* CollisionMesh;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDontCreateShape;
    
    UPROPERTY(EditAnywhere)
    bool bAutoAdjustCollisionSize;
    
    UPROPERTY(EditAnywhere)
    FVector Offset;
    
    UPROPERTY(EditAnywhere)
    float ShapeRadius;
    
    UPROPERTY(EditAnywhere)
    float ShapeWidth;
    
    UPROPERTY(EditAnywhere)
    float Mass;
    
    UPROPERTY(EditAnywhere)
    float DampingRate;
    
    UPROPERTY(EditAnywhere)
    float SteerAngle;
    
    UPROPERTY(EditAnywhere)
    bool bAffectedByHandbrake;
    
    UPROPERTY()
    UTireType* TireType;
    
    UPROPERTY(EditAnywhere)
    UTireConfig* TireConfig;
    
    UPROPERTY(EditAnywhere)
    float LatStiffMaxLoad;
    
    UPROPERTY(EditAnywhere)
    float LatStiffValue;
    
    UPROPERTY(EditAnywhere)
    float LongStiffValue;
    
    UPROPERTY(EditAnywhere)
    float SuspensionForceOffset;
    
    UPROPERTY(EditAnywhere)
    float SuspensionMaxRaise;
    
    UPROPERTY(EditAnywhere)
    float SuspensionMaxDrop;
    
    UPROPERTY(EditAnywhere)
    float SuspensionNaturalFrequency;
    
    UPROPERTY(EditAnywhere)
    float SuspensionDampingRatio;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EWheelSweepType> SweepType;
    
    UPROPERTY(EditAnywhere)
    float MaxBrakeTorque;
    
    UPROPERTY(EditAnywhere)
    float MaxHandBrakeTorque;
    
    UPROPERTY(Export, Transient)
    UWheeledVehicleMovementComponent* VehicleSim;
    
    UPROPERTY(Transient)
    int32 WheelIndex;
    
    UPROPERTY(Transient)
    float DebugLongSlip;
    
    UPROPERTY(Transient)
    float DebugLatSlip;
    
    UPROPERTY(Transient)
    float DebugNormalizedTireLoad;
    
    UPROPERTY(Transient)
    float DebugWheelTorque;
    
    UPROPERTY(Transient)
    float DebugLongForce;
    
    UPROPERTY(Transient)
    float DebugLatForce;
    
    UPROPERTY(Transient)
    FVector Location;
    
    UPROPERTY(Transient)
    FVector OldLocation;
    
    UPROPERTY(Transient)
    FVector Velocity;
    
    UVehicleWheel();
    UFUNCTION(BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintPure)
    float GetSuspensionOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetSteerAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetRotationAngle() const;
    
};

