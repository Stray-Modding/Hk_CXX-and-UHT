#ifndef UE4SS_SDK_SewersTorchlightCine_Sequence_HPP
#define UE4SS_SDK_SewersTorchlightCine_Sequence_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABP_ZurgBoss_Eye_C* BP_ZurgBoss_Eye58);
    void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABP_ZurgBoss_Eye_C* BP_ZurgBoss_Eye58);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_ZurgBoss_Eye_C* BP_ZurgBoss_Eye58);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_ZurgBoss_Eye_C* BP_ZurgBoss_Eye58);
    void BP_ZurgBoss_Eye58_Event_0(class ABP_ZurgBoss_Eye_C* BP_ZurgBoss_Eye58, TEnumAsByte<ENUM_ZurgBoss_State> CurrentState);
    void BP_ZurgBoss_Eye58_Event_1(class ABP_ZurgBoss_Eye_C* BP_ZurgBoss_Eye58, TEnumAsByte<ENUM_ZurgBoss_State> CurrentState);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x40

#endif
