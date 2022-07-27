#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSceneComponentImpersonator -FallbackName=MovieSceneSceneComponentImpersonator
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFilmbackSettings -FallbackName=CameraFilmbackSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraLensSettings -FallbackName=CameraLensSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFocusSettings -FallbackName=CameraFocusSettings
#include "SequenceCameraShakeCameraStandIn.generated.h"

UCLASS()
class USequenceCameraShakeCameraStandIn : public UObject, public IMovieSceneSceneComponentImpersonator {
    GENERATED_BODY()
public:
    UPROPERTY()
    float FieldOfView;
    
    UPROPERTY()
    uint8 bConstrainAspectRatio: 1;
    
    UPROPERTY()
    float AspectRatio;
    
    UPROPERTY()
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY()
    float PostProcessBlendWeight;
    
    UPROPERTY()
    FCameraFilmbackSettings Filmback;
    
    UPROPERTY()
    FCameraLensSettings LensSettings;
    
    UPROPERTY()
    FCameraFocusSettings FocusSettings;
    
    UPROPERTY()
    float CurrentFocalLength;
    
    UPROPERTY()
    float CurrentAperture;
    
    UPROPERTY()
    float CurrentFocusDistance;
    
    USequenceCameraShakeCameraStandIn();
    
    // Fix for true pure virtual functions not being implemented
};

