#pragma once
#include "CoreMinimal.h"
#include "AtmospherePrecomputeParameters.generated.h"

USTRUCT(BlueprintType)
struct FAtmospherePrecomputeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DensityHeight;
    
    UPROPERTY()
    float DecayHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxScatteringOrder;
    
    UPROPERTY()
    int32 TransmittanceTexWidth;
    
    UPROPERTY()
    int32 TransmittanceTexHeight;
    
    UPROPERTY()
    int32 IrradianceTexWidth;
    
    UPROPERTY()
    int32 IrradianceTexHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 InscatterAltitudeSampleNum;
    
    UPROPERTY()
    int32 InscatterMuNum;
    
    UPROPERTY()
    int32 InscatterMuSNum;
    
    UPROPERTY()
    int32 InscatterNuNum;
    
    ENGINE_API FAtmospherePrecomputeParameters();
};

