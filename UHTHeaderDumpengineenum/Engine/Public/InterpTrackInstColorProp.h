#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInstProperty.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "InterpTrackInstColorProp.generated.h"

UCLASS()
class UInterpTrackInstColorProp : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    FColor ResetColor;
    
    UInterpTrackInstColorProp();
};

