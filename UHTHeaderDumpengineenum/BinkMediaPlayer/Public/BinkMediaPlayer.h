#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EBinkMediaPlayerBinkSoundTrack.h"
#include "EBinkMediaPlayerBinkBufferModes.h"
#include "OnBinkMediaPlayerMediaClosedDelegate.h"
#include "OnBinkMediaPlayerMediaReachedEndDelegate.h"
#include "OnBinkMediaPlayerMediaOpenedDelegate.h"
#include "OnBinkMediaPlayerMediaEventDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EBinkMediaPlayerBinkDrawStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "BinkMediaPlayer.generated.h"

class UTexture;

UCLASS(BlueprintType)
class BINKMEDIAPLAYER_API UBinkMediaPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnBinkMediaPlayerMediaClosed OnMediaClosed;
    
    UPROPERTY(BlueprintAssignable)
    FOnBinkMediaPlayerMediaOpened OnMediaOpened;
    
    UPROPERTY(BlueprintAssignable)
    FOnBinkMediaPlayerMediaReachedEnd OnMediaReachedEnd;
    
    UPROPERTY(BlueprintAssignable)
    FOnBinkMediaPlayerMediaEvent OnPlaybackSuspended;
    
    UPROPERTY(EditAnywhere)
    uint8 Looping: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 StartImmediately: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 DelayedOpen: 1;
    
    UPROPERTY(EditAnywhere)
    FVector2D BinkDestinationUpperLeft;
    
    UPROPERTY(EditAnywhere)
    FVector2D BinkDestinationLowerRight;
    
    UPROPERTY(EditAnywhere)
    FString URL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EBinkMediaPlayerBinkBufferModes> BinkBufferMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EBinkMediaPlayerBinkSoundTrack> BinkSoundTrack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BinkSoundTrackStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EBinkMediaPlayerBinkDrawStyle> BinkDrawStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BinkLayerDepth;
    
    UBinkMediaPlayer();
    UFUNCTION(BlueprintPure)
    bool SupportsSeeking() const;
    
    UFUNCTION(BlueprintPure)
    bool SupportsScrubbing() const;
    
    UFUNCTION(BlueprintPure)
    bool SupportsRate(float Rate, bool Unthinned) const;
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool SetRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool SetLooping(bool InLooping);
    
    UFUNCTION(BlueprintCallable)
    bool Seek(const FTimespan& InTime);
    
    UFUNCTION(BlueprintCallable)
    bool Rewind();
    
    UFUNCTION(BlueprintCallable)
    bool Play();
    
    UFUNCTION(BlueprintCallable)
    bool Pause();
    
    UFUNCTION(BlueprintCallable)
    bool OpenUrl(const FString& NewUrl);
    
    UFUNCTION(BlueprintPure)
    bool IsStopped() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintPure)
    FString GetUrl() const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetRate() const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void Draw(UTexture* Texture, bool tonemap, int32 out_nits, float Alpha, bool srgb_decode, bool hdr);
    
    UFUNCTION(BlueprintCallable)
    void CloseUrl();
    
    UFUNCTION(BlueprintPure)
    bool CanPlay() const;
    
    UFUNCTION(BlueprintPure)
    bool CanPause() const;
    
};

