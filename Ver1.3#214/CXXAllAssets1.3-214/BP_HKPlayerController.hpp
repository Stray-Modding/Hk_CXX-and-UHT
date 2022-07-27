#ifndef UE4SS_SDK_BP_HKPlayerController_HPP
#define UE4SS_SDK_BP_HKPlayerController_HPP

class ABP_HKPlayerController_C : public AHKPlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0740 (size: 0x8)
    class UAudioComponent* ControllerAudio;                                           // 0x0748 (size: 0x8)
    class UAudioComponent* ControllerVibration;                                       // 0x0750 (size: 0x8)
    class ABP_CatPawn_C* Cat Pawn;                                                    // 0x0758 (size: 0x8)
    class UUMG_HUD_DeathScreen_C* DangeEffectWidget;                                  // 0x0760 (size: 0x8)
    class UUMG_InputHelper_C* InputHelperWidget;                                      // 0x0768 (size: 0x8)
    int32 CameraIndex;                                                                // 0x0770 (size: 0x4)
    class ABP_HKHUD_C* HUD;                                                           // 0x0778 (size: 0x8)
    bool DebugPS5Haptic;                                                              // 0x0780 (size: 0x1)

    void SetPS5ControllerSoundLevelOnAudioComponent(class UAudioComponent* AudioComponent, float Level);
    void IsPS5ControllerMakingSoundOnAudioComponent(class UAudioComponent* AudioComponent, bool& IsVibrating);
    void StopPS5ControllerSoundOnAudioComponent(class UAudioComponent* AudioComponent, float FadeOutTime);
    void StartPS5ControllerSoundOnAudioComponent(class UAudioComponent* AudioComponent, class USoundWave* SoundVibration, float FadeInTime, float Level);
    void IsPS5VibrationControllerPausedOnAudioComponent(class UAudioComponent* AudioComponent, bool& IsPaused);
    void SetPS5VibrationPausedOnAudioComponent(class UAudioComponent* AudioComponent, bool IsPaused);
    void SetPS5VibrationLevelOnAudioComponent(class UAudioComponent* AudioComponent, float Level);
    void IsPS5VibratingOnAudioComponent(class UAudioComponent* AudioComponent, bool& IsVibrating);
    void StopPS5VibrationOnAudioComponent(class UAudioComponent* AudioComponent, float FadeOutTime);
    void StartPS5VibrationOnAudioComponent(class UAudioComponent* AudioComponent, class USoundWave* SoundVibration, float FadeInTime, float Level);
    void SetPS5ControllerSoundLevel(float Level);
    void IsPS5ControllerMakingSound(bool& IsVibrating);
    void StopPS5ControllerSound(float FadeOutTime);
    void StartPS5ControllerSound(class USoundWave* SoundVibration, float FadeInTime, float Level);
    void IsPS5VibrationControllerPaused(bool& IsPaused);
    void SetPS5VibrationPaused(bool IsPaused);
    void SetPS5VibrationLevel(float Level);
    void IsPS5Vibrating(bool& IsVibrating);
    void StopPS5Vibration(float FadeOutTime);
    void StartPS5Vibration(class USoundWave* SoundVibration, float FadeInTime, float Level);
    void ReceiveBeginPlay();
    void CatDied();
    void RespawnAfterDeathPressed();
    void CatRevived();
    void ReceiveTick(float DeltaSeconds);
    void OnEnterCinematicMode(float _fadeTime);
    void OnExitCinematicMode(float _fadeTime);
    void ExecuteUbergraph_BP_HKPlayerController(int32 EntryPoint);
}; // Size: 0x781

#endif
