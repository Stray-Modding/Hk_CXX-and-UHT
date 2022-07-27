#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EBinkMoviePlayerBinkSoundTrack.h"
#include "EBinkMoviePlayerBinkBufferModes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EPixelFormat -FallbackName=EPixelFormat
#include "BinkMoviePlayerSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class BINKMEDIAPLAYER_API UBinkMoviePlayerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EBinkMoviePlayerBinkBufferModes> BinkBufferMode;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EBinkMoviePlayerBinkSoundTrack> BinkSoundTrack;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 BinkSoundTrackStart;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FVector2D BinkDestinationUpperLeft;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FVector2D BinkDestinationLowerRight;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EPixelFormat> BinkPixelFormat;
    
    UBinkMoviePlayerSettings();
};

