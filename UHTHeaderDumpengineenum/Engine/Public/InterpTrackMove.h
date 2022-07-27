#pragma once
#include "CoreMinimal.h"
#include "EInterpTrackMoveRotMode.h"
#include "InterpTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector -FallbackName=InterpCurveVector
#include "InterpLookupTrack.h"
#include "InterpTrackMove.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackMove : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FInterpCurveVector PosTrack;
    
    UPROPERTY()
    FInterpCurveVector EulerTrack;
    
    UPROPERTY()
    FInterpLookupTrack LookupTrack;
    
    UPROPERTY(EditAnywhere)
    FName LookAtGroupName;
    
    UPROPERTY(EditAnywhere)
    float LinCurveTension;
    
    UPROPERTY(EditAnywhere)
    float AngCurveTension;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseQuatInterpolation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowArrowAtKeys: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableMovement: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowTranslationOnCurveEd: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowRotationOnCurveEd: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHide3DTrack: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EInterpTrackMoveRotMode> RotMode;
    
    UInterpTrackMove();
};

