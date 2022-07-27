#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DistributionVectorConstant.h"
#include "DistributionParamMode.h"
#include "DistributionVectorParameterBase.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionVectorParameterBase : public UDistributionVectorConstant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    FVector MinInput;
    
    UPROPERTY(EditAnywhere)
    FVector MaxInput;
    
    UPROPERTY(EditAnywhere)
    FVector MinOutput;
    
    UPROPERTY(EditAnywhere)
    FVector MaxOutput;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<DistributionParamMode> ParamModes[3];
    
    UDistributionVectorParameterBase();
};

