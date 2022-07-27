#pragma once
#include "CoreMinimal.h"
#include "InterpTrackFloatBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "InterpTrackFade.generated.h"

UCLASS(CollapseCategories)
class UInterpTrackFade : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bPersistFade: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFadeAudio: 1;
    
    UPROPERTY(EditAnywhere)
    FLinearColor FadeColor;
    
    UInterpTrackFade();
};

