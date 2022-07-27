#pragma once
#include "CoreMinimal.h"
#include "InterpTrackFloatBase.h"
#include "AnimControlTrackKey.h"
#include "InterpTrackAnimControl.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackAnimControl : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SlotName;
    
    UPROPERTY()
    TArray<FAnimControlTrackKey> AnimSeqs;
    
    UPROPERTY(EditAnywhere)
    uint8 bSkipAnimNotifiers: 1;
    
    UInterpTrackAnimControl();
};

