#ifndef UE4SS_SDK_COMP_reverb_setter_HPP
#define UE4SS_SDK_COMP_reverb_setter_HPP

class UCOMP_reverb_setter_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 assigned submix index;
    class USoundEffectSubmixPreset* reverb preset;
    bool reverbIsFallback;
    float CurrentTarget;

    void get reverb submix index(int32& Index);
    void update_reverb(float Volume);
    void set reverb submix index(int32 Index);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_COMP_reverb_setter(int32 EntryPoint);
};

#endif
