#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "NiagaraDataInterfaceCurveBase.h"
#include "NiagaraDataInterfaceColorCurve.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRichCurve RedCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve GreenCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve BlueCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve AlphaCurve;
    
    UNiagaraDataInterfaceColorCurve();
};

