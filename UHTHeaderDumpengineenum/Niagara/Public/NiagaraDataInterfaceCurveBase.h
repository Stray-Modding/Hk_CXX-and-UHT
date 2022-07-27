#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceCurveBase.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<float> ShaderLUT;
    
    UPROPERTY()
    float LUTMinTime;
    
    UPROPERTY()
    float LUTMaxTime;
    
    UPROPERTY()
    float LUTInvTimeRange;
    
    UPROPERTY()
    float LUTNumSamplesMinusOne;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bUseLUT: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bExposeCurve: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FName ExposedName;
    
    UPROPERTY()
    UTexture2D* ExposedTexture;
    
    UNiagaraDataInterfaceCurveBase();
};

