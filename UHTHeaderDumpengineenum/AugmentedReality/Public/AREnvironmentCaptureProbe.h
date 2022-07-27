#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AREnvironmentCaptureProbe.generated.h"

class UAREnvironmentCaptureProbeTexture;

UCLASS()
class AUGMENTEDREALITY_API UAREnvironmentCaptureProbe : public UARTrackedGeometry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FVector Extent;
    
    UPROPERTY()
    UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;
    
public:
    UAREnvironmentCaptureProbe();
    UFUNCTION(BlueprintPure)
    FVector GetExtent() const;
    
    UFUNCTION(BlueprintPure)
    UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
    
};

