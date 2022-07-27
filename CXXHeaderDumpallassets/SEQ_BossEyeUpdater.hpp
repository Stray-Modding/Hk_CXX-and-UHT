#ifndef UE4SS_SDK_SEQ_BossEyeUpdater_HPP
#define UE4SS_SDK_SEQ_BossEyeUpdater_HPP

class ASEQ_BossEyeUpdater_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TEnumAsByte<ENUM_ZurgBoss_State> EyeState;                                        // 0x0270 (size: 0x1)

    void LogicTrigger();
    void UpdateEyes(TEnumAsByte<ENUM_ZurgBoss_State> State);
    void ExecuteUbergraph_SEQ_BossEyeUpdater(int32 EntryPoint);
}; // Size: 0x271

#endif
