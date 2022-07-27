#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "InterpTrackInstMove.generated.h"

UCLASS(MinimalAPI)
class UInterpTrackInstMove : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector ResetLocation;
    
    UPROPERTY()
    FRotator ResetRotation;
    
    UInterpTrackInstMove();
};

