#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EProximityProbeDirection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ProximityProbeComponent.generated.h"

class UProximitySweepProbe;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UProximityProbeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreFront;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreBack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProbeEndDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProbeStartDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProbeRadius;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
private:
    UPROPERTY(Transient)
    UProximitySweepProbe* m_probes[6];
    
public:
    UProximityProbeComponent();
    UFUNCTION(BlueprintPure)
    bool IsObstacleDetected(TEnumAsByte<EProximityProbeDirection> _probeIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetObstacleLocation(TEnumAsByte<EProximityProbeDirection> _probeIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetObstacleDistance(TEnumAsByte<EProximityProbeDirection> _probeIndex) const;
    
};

