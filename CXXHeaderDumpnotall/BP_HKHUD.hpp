#ifndef UE4SS_SDK_BP_HKHUD_HPP
#define UE4SS_SDK_BP_HKHUD_HPP

class ABP_HKHUD_C : public AHKHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class UUMG_HUD_C* HUDWidget;
    FBP_HKHUD_CActionDisplayModeChanged ActionDisplayModeChanged;
    void ActionDisplayModeChanged(class AHKHUD* HUD);
    class UMediaPlayer* FullScreenVideoMediaPlayer;
    bool IsPlayingCinematic;
    bool IsCinematicSkippable;
    float SkipVideoPressTime;
    float SkipVideoPressTimer;
    class UUMG_Cinemascope_C* UMGCinemascope;
    int32 CinemascopeEnabledCount;
    class UUMG_ScreenOverlay_C* DefaultScreenOverlay;
    class UUMG_ScreenOverlay_C* GameScreenOverlay;
    class UAudioComponent* CinematicMusicTrack;
    FBP_HKHUD_CCinematicStopped CinematicStopped;
    void CinematicStopped();
    class UBinkMediaPlayer* BinkMediaPlayer;
    class ABP_sfx_single_player_C* CinematicMusicActor;

    void ConvertVideoURLDependingOnPlatform(FString URL, FString& Converted URL);
    FLinearColor GetScreenFadeColorInternal(TEnumAsByte<EScreenFadeType> _type);
    void CreateOrGetScreenOverlay(TEnumAsByte<EScreenFadeType> Type, class UUMG_ScreenOverlay_C*& ScreenOverlay);
    bool IsVideoCinematicSkippable();
    bool IsPlayingVideoCinematic();
    void ReceiveBeginPlay();
    void StartVideoCinematic(FString _URL, FName _musicActorId);
    void StopVideoCinematic();
    void ReceiveTick(float DeltaSeconds);
    void SetVideoCinematicSkippable(bool _value);
    void PushCinemascopeEnabled(float Time);
    void PopCinemascopeEnabled(float Time);
    void _SetScreenFadeColorInternal(TEnumAsByte<EScreenFadeType> _type, FLinearColor _color);
    void OnActionDisplayHidden();
    void OnActionDisplayShown();
    void BndEvt__BP_HKHUD_BinkMediaPlayer_K2Node_ComponentBoundEvent_0_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_HKHUD(int32 EntryPoint);
    void CinematicStopped__DelegateSignature();
    void ActionDisplayModeChanged__DelegateSignature(class AHKHUD* HUD);
};

#endif
