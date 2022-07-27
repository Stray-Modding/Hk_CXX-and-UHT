#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraMergeable -FallbackName=NiagaraMergeable
#include "NiagaraPlatformSet.h"
#include "ENiagaraRendererMotionVectorSetting.h"
#include "NiagaraRendererProperties.generated.h"

UCLASS(Abstract)
class NIAGARA_API UNiagaraRendererProperties : public UNiagaraMergeable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(EditAnywhere)
    int32 SortOrderHint;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRendererMotionVectorSetting MotionVectorSetting;
    
    UPROPERTY()
    bool bIsEnabled;
    
protected:
    UPROPERTY()
    bool bMotionBlurEnabled;
    
public:
    UNiagaraRendererProperties();
};

