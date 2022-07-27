#ifndef UE4SS_SDK_BinkMediaPlayer_HPP
#define UE4SS_SDK_BinkMediaPlayer_HPP

#include "BinkMediaPlayer_enums.hpp"

class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
{

    FTimespan BinkLoadingMovie_GetTime();
    FTimespan BinkLoadingMovie_GetDuration();
    void Bink_DrawOverlays();
};

class UBinkMediaPlayer : public UObject
{
    FBinkMediaPlayerOnMediaClosed OnMediaClosed;
    void OnBinkMediaPlayerMediaClosed();
    FBinkMediaPlayerOnMediaOpened OnMediaOpened;
    void OnBinkMediaPlayerMediaOpened(FString OpenedUrl);
    FBinkMediaPlayerOnMediaReachedEnd OnMediaReachedEnd;
    void OnBinkMediaPlayerMediaReachedEnd();
    FBinkMediaPlayerOnPlaybackSuspended OnPlaybackSuspended;
    void OnBinkMediaPlayerMediaEvent();
    uint8 Looping;
    uint8 StartImmediately;
    uint8 DelayedOpen;
    FVector2D BinkDestinationUpperLeft;
    FVector2D BinkDestinationLowerRight;
    FString URL;
    TEnumAsByte<EBinkMediaPlayerBinkBufferModes> BinkBufferMode;
    TEnumAsByte<EBinkMediaPlayerBinkSoundTrack> BinkSoundTrack;
    int32 BinkSoundTrackStart;
    TEnumAsByte<EBinkMediaPlayerBinkDrawStyle> BinkDrawStyle;
    int32 BinkLayerDepth;

    bool SupportsSeeking();
    bool SupportsScrubbing();
    bool SupportsRate(float Rate, bool Unthinned);
    void Stop();
    void SetVolume(float Rate);
    bool SetRate(float Rate);
    bool SetLooping(bool InLooping);
    bool Seek(const FTimespan& InTime);
    bool Rewind();
    bool Play();
    bool Pause();
    bool OpenUrl(FString NewUrl);
    bool IsStopped();
    bool IsPlaying();
    bool IsPaused();
    bool IsLooping();
    bool IsInitialized();
    FString GetUrl();
    FTimespan GetTime();
    float GetRate();
    FTimespan GetDuration();
    void Draw(class UTexture* Texture, bool tonemap, int32 out_nits, float Alpha, bool srgb_decode, bool hdr);
    void CloseUrl();
    bool CanPlay();
    bool CanPause();
};

class UBinkMediaTexture : public UTexture
{
    TEnumAsByte<TextureAddress> AddressX;
    TEnumAsByte<TextureAddress> AddressY;
    class UBinkMediaPlayer* MediaPlayer;
    TEnumAsByte<EPixelFormat> PixelFormat;
    bool tonemap;
    float OutputNits;
    float Alpha;
    bool DecodeSRGB;

    void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);
    void Clear();
};

class UBinkMoviePlayerSettings : public UObject
{
    TEnumAsByte<EBinkMoviePlayerBinkBufferModes> BinkBufferMode;
    TEnumAsByte<EBinkMoviePlayerBinkSoundTrack> BinkSoundTrack;
    int32 BinkSoundTrackStart;
    FVector2D BinkDestinationUpperLeft;
    FVector2D BinkDestinationLowerRight;
    TEnumAsByte<EPixelFormat> BinkPixelFormat;

};

#endif
