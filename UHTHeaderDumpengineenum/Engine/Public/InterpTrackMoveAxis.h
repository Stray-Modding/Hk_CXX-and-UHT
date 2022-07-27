#pragma once
#include "CoreMinimal.h"
#include "InterpTrackFloatBase.h"
#include "EInterpMoveAxis.h"
#include "InterpLookupTrack.h"
#include "InterpTrackMoveAxis.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackMoveAxis : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EInterpMoveAxis> MoveAxis;
    
    UPROPERTY()
    FInterpLookupTrack LookupTrack;
    
    UInterpTrackMoveAxis();
};

