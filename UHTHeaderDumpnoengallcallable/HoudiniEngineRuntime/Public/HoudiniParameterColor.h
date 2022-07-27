#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "HoudiniParameterColor.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterColor : public UHoudiniParameter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChildOfRamp;
    
public:
    UHoudiniParameterColor();
};
