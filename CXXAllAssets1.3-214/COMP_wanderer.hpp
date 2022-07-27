#ifndef UE4SS_SDK_COMP_wanderer_HPP
#define UE4SS_SDK_COMP_wanderer_HPP

class UCOMP_wanderer_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UAudioComponent* AudioComponent;                                            // 0x00B8 (size: 0x8)
    class USoundBase* SoundBase;                                                      // 0x00C0 (size: 0x8)
    FVector Position;                                                                 // 0x00C8 (size: 0xC)
    FVector Target;                                                                   // 0x00D4 (size: 0xC)
    class UBoxComponent* Box;                                                         // 0x00E0 (size: 0x8)
    bool cameraDrive;                                                                 // 0x00E8 (size: 0x1)
    bool randomWander;                                                                // 0x00E9 (size: 0x1)
    float pitch min;                                                                  // 0x00EC (size: 0x4)
    float pitch max;                                                                  // 0x00F0 (size: 0x4)
    float gain min;                                                                   // 0x00F4 (size: 0x4)
    float gain max;                                                                   // 0x00F8 (size: 0x4)
    class USoundAttenuation* Attenuation;                                             // 0x0100 (size: 0x8)

    void changeWandererSfxTarget();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void setDriverLocation(FVector Location);
    void setBox(const class UBoxComponent* Box);
    void Play();
    void Stop();
    void adjust volume(float Volume);
    void ExecuteUbergraph_COMP_wanderer(int32 EntryPoint);
}; // Size: 0x108

#endif
