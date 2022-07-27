#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstDirector.generated.h"

class AActor;

UCLASS(MinimalAPI)
class UInterpTrackInstDirector : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* OldViewTarget;
    
    UInterpTrackInstDirector();
};

