#ifndef UE4SS_SDK_F_reverb_slot_HPP
#define UE4SS_SDK_F_reverb_slot_HPP

struct FF_reverb_slot
{
    bool occupied_1_35D76E6E4C9DFA68E631759ED4BF48AB;                                 // 0x0000 (size: 0x1)
    float volume_4_3AC1F12745A640592C98C5815C4EEE7F;                                  // 0x0004 (size: 0x4)
    class USoundSubmix* submix_7_83A8E1B2414E56A3722E3A8E5FE4004F;                    // 0x0008 (size: 0x8)
    TScriptInterface<class II_reverb_setter_C> setter_10_EDA1EDB0490168FAC90821A4041C450C; // 0x0010 (size: 0x10)
    FString PresetName_13_F877EFF44883A38E4F0E50BEDBB2E263;                           // 0x0020 (size: 0x10)

}; // Size: 0x30

#endif
