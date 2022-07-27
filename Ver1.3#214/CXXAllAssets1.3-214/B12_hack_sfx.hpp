#ifndef UE4SS_SDK_B12_hack_sfx_HPP
#define UE4SS_SDK_B12_hack_sfx_HPP

class UB12_hack_sfx_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)

    void getAudioComponent(class UAudioComponent*& Component);
    void StopSound();
    void EmergencyStop(float Duration);
    void Play();
    void Allow New Sound();
    void Play off();
    void Play_guirlande();
    void StartSound();
    void ExecuteUbergraph_B12_hack_sfx(int32 EntryPoint);
}; // Size: 0xB8

#endif
