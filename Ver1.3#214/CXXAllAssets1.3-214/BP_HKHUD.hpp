#ifndef UE4SS_SDK_BP_HKHUD_HPP
#define UE4SS_SDK_BP_HKHUD_HPP

class ABP_HKHUD_C : public AHKHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0498 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x04A0 (size: 0x8)
    class UUMG_HUD_C* HUDWidget;                                                      // 0x04A8 (size: 0x8)
    FBP_HKHUD_CActionDisplayModeChanged ActionDisplayModeChanged;                     // 0x04B0 (size: 0x10)
    void ActionDisplayModeChanged(class AHKHUD* HUD);
    class UMediaPlayer* FullScreenVideoMediaPlayer;                                   // 0x04C0 (size: 0x8)
    bool IsPlayingCinematic;                                                          // 0x04C8 (size: 0x1)
    bool IsCinematicSkippable;                                                        // 0x04C9 (size: 0x1)
    float SkipVideoPressTime;                                                         // 0x04CC (size: 0x4)
    float SkipVideoPressTimer;                                                        // 0x04D0 (size: 0x4)
    class UUMG_Cinemascope_C* UMGCinemascope;                                         // 0x04D8 (size: 0x8)
    int32 CinemascopeEnabledCount;                                                    // 0x04E0 (size: 0x4)
    class UUMG_ScreenOverlay_C* DefaultScreenOverlay;                                 // 0x04E8 (size: 0x8)
    class UUMG_ScreenOverlay_C* GameScreenOverlay;                                    // 0x04F0 (size: 0x8)
    class UAudioComponent* CinematicMusicTrack;                                       // 0x04F8 (size: 0x8)
    FBP_HKHUD_CCinematicStopped CinematicStopped;                                     // 0x0500 (size: 0x10)
    void CinematicStopped();
    class UBinkMediaPlayer* BinkMediaPlayer;                                          // 0x0510 (size: 0x8)
    class ABP_sfx_single_player_C* CinematicMusicActor;                               // 0x0518 (size: 0x8)

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
}; // Size: 0x520

#endif
