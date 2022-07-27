#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceCurveBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "NiagaraDataInterfaceVector4Curve.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRichCurve XCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve YCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve ZCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve WCurve;
    
    UNiagaraDataInterfaceVector4Curve();
};

