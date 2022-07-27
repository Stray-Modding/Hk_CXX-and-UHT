#ifndef UE4SS_SDK_COMP_PhysicsAudioComponent_HPP
#define UE4SS_SDK_COMP_PhysicsAudioComponent_HPP

class UCOMP_PhysicsAudioComponent_C : public UPhysicsEventsComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    class UAudioComponent* SlidingAudio;                                              // 0x0140 (size: 0x8)
    class UAudioComponent* RollingAudio;                                              // 0x0148 (size: 0x8)
    FDebugFloatHistory HitAmplitudeHistory;                                           // 0x0150 (size: 0x20)
    class USoundBase* SlidingSound;                                                   // 0x0170 (size: 0x8)
    float SlidingMinPitch;                                                            // 0x0178 (size: 0x4)
    float SlidingMaxPitch;                                                            // 0x017C (size: 0x4)
    class USoundBase* RollingSound;                                                   // 0x0180 (size: 0x8)
    float RollingMinPitch;                                                            // 0x0188 (size: 0x4)
    float RollingMaxPitch;                                                            // 0x018C (size: 0x4)
    TArray<class USoundBase*> impact sounds;                                          // 0x0190 (size: 0x10)
    float adapt volume;                                                               // 0x01A0 (size: 0x4)
    float Pitch;                                                                      // 0x01A4 (size: 0x4)
    class USoundBase* SurfaceMovingSound;                                             // 0x01A8 (size: 0x8)
    class UAudioComponent* SurfaceMovingAudio;                                        // 0x01B0 (size: 0x8)
    float SurfaceMovingMinPitch;                                                      // 0x01B8 (size: 0x4)
    float SurfaceMovingMaxPitch;                                                      // 0x01BC (size: 0x4)
    float Impact hysteresis;                                                          // 0x01C0 (size: 0x4)
    float hitThreshold;                                                               // 0x01C4 (size: 0x4)
    float sliding gain;                                                               // 0x01C8 (size: 0x4)
    float Current Sliding Volume;                                                     // 0x01CC (size: 0x4)
    float rolling gain;                                                               // 0x01D0 (size: 0x4)
    float Current Rolling Volume;                                                     // 0x01D4 (size: 0x4)
    bool can play sound on surface moving;                                            // 0x01D8 (size: 0x1)
    float moving gain;                                                                // 0x01DC (size: 0x4)
    float Current Moving Volume;                                                      // 0x01E0 (size: 0x4)
    float pending hit;                                                                // 0x01E4 (size: 0x4)
    float surfaceMovingThreshold;                                                     // 0x01E8 (size: 0x4)
    float hit gain;                                                                   // 0x01EC (size: 0x4)

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
}; // Size: 0x1F0

#endif
