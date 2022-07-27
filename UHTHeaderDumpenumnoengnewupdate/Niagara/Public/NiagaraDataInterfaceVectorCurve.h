#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "NiagaraDataInterfaceCurveBase.h"
#include "NiagaraDataInterfaceVectorCurve.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRichCurve XCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve YCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve ZCurve;
    
    UNiagaraDataInterfaceVectorCurve();
};

