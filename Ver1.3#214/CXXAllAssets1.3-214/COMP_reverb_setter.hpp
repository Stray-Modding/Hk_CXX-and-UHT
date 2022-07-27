#ifndef UE4SS_SDK_COMP_reverb_setter_HPP
#define UE4SS_SDK_COMP_reverb_setter_HPP

class UCOMP_reverb_setter_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    int32 assigned submix index;                                                      // 0x00B8 (size: 0x4)
    class USoundEffectSubmixPreset* reverb preset;                                    // 0x00C0 (size: 0x8)
    bool reverbIsFallback;                                                            // 0x00C8 (size: 0x1)
    float CurrentTarget;                                                              // 0x00CC (size: 0x4)

    void get reverb submix index(int32& Index);
    void update_reverb(float Volume);
    void set reverb submix index(int32 Index);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_COMP_reverb_setter(int32 EntryPoint);
}; // Size: 0xD0

#endif
