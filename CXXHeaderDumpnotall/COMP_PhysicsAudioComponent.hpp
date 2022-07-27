#ifndef UE4SS_SDK_COMP_PhysicsAudioComponent_HPP
#define UE4SS_SDK_COMP_PhysicsAudioComponent_HPP

class UCOMP_PhysicsAudioComponent_C : public UPhysicsEventsComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* SlidingAudio;
    class UAudioComponent* RollingAudio;
    FDebugFloatHistory HitAmplitudeHistory;
    class USoundBase* SlidingSound;
    float SlidingMinPitch;
    float SlidingMaxPitch;
    class USoundBase* RollingSound;
    float RollingMinPitch;
    float RollingMaxPitch;
    TArray<class USoundBase*> impact sounds;
    float adapt volume;
    float Pitch;
    class USoundBase* SurfaceMovingSound;
    class UAudioComponent* SurfaceMovingAudio;
    float SurfaceMovingMinPitch;
    float SurfaceMovingMaxPitch;
    float Impact hysteresis;
    float hitThreshold;
    float sliding gain;
    float Current Sliding Volume;
    float rolling gain;
    float Current Rolling Volume;
    bool can play sound on surface moving;
    float moving gain;
    float Current Moving Volume;
    float pending hit;
    float surfaceMovingThreshold;
    float hit gain;

    void Initialize();
    void Update();
    void UpdateDebug();
    void initializeSounds();
    void impactEvent(FVector Location, float Amplitude, TEnumAsByte<EPhysicalSurface> Surface Type);
    void StartSlide();
    void StartRoll();
    void OnSurfaceMovingEnd();
    void OnSurfaceMovingBegin();
    void OnImpact(FVector _location, float _amplitude, TEnumAsByte<EPhysicalSurface> _surfaceType);
    void ExecuteUbergraph_COMP_PhysicsAudioComponent(int32 EntryPoint);
};

#endif
