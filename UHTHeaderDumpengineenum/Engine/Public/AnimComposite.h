#pragma once
#include "CoreMinimal.h"
#include "AnimCompositeBase.h"
#include "AnimTrack.h"
#include "AnimComposite.generated.h"

UCLASS(MinimalAPI)
class UAnimComposite : public UAnimCompositeBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FAnimTrack AnimationTrack;
    
    UAnimComposite();
};

