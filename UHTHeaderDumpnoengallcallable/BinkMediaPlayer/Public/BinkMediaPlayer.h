#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnBinkMediaPlayerMediaClosedDelegate.h"
#include "OnBinkMediaPlayerMediaReachedEndDelegate.h"
#include "OnBinkMediaPlayerMediaOpenedDelegate.h"
#include "OnBinkMediaPlayerMediaEventDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EBinkMediaPlayerBinkSoundTrack.h"
#include "EBinkMediaPlayerBinkBufferModes.h"
#include "EBinkMediaPlayerBinkDrawStyle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "BinkMediaPlayer.generated.h"

class UTexture;

UCLASS(Blueprintable)
class BINKMEDIAPLAYER_API UBinkMediaPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBinkMediaPlayerMediaClosed OnMediaClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBinkMediaPlayerMediaOpened OnMediaOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBinkMediaPlayerMediaReachedEnd OnMediaReachedEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBinkMediaPlayerMediaEvent OnPlaybackSuspended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Looping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StartImmediately: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DelayedOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BinkDestinationUpperLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BinkDestinationLowerRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBinkMediaPlayerBinkBufferModes> BinkBufferMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBinkMediaPlayerBinkSoundTrack> BinkSoundTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BinkSoundTrackStart;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBinkMediaPlayerBinkDrawStyle> BinkDrawStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BinkLayerDepth;
    
    UBinkMediaPlayer();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsSeeking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsScrubbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUrl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void Draw(UTexture* Texture, bool tonemap, int32 out_nits, float Alpha, bool srgb_decode, bool hdr);
    
    UFUNCTION(BlueprintCallable)
    void CloseUrl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPause() const;
    
};

