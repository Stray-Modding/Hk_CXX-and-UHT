#ifndef UE4SS_SDK_BP_HKPlayerController_HPP
#define UE4SS_SDK_BP_HKPlayerController_HPP

class ABP_HKPlayerController_C : public AHKPlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* ControllerAudio;
    class UAudioComponent* ControllerVibration;
    class ABP_CatPawn_C* Cat Pawn;
    class UUMG_HUD_DeathScreen_C* DangeEffectWidget;
    class UUMG_InputHelper_C* InputHelperWidget;
    int32 CameraIndex;
    class ABP_HKHUD_C* HUD;
    bool DebugPS5Haptic;

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
};

#endif
