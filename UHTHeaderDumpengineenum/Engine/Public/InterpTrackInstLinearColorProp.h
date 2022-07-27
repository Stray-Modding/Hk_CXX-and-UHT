#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInstProperty.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "InterpTrackInstLinearColorProp.generated.h"

UCLASS()
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    FLinearColor ResetColor;
    
    UInterpTrackInstLinearColorProp();
};

