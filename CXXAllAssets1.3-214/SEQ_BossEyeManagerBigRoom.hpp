#ifndef UE4SS_SDK_SEQ_BossEyeManagerBigRoom_HPP
#define UE4SS_SDK_SEQ_BossEyeManagerBigRoom_HPP

class ASEQ_BossEyeManagerBigRoom_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool FirstTrigger;                                                                // 0x0270 (size: 0x1)

    void LogicTrigger();
    void UpdateEyes(TEnumAsByte<ENUM_ZurgBoss_State> State);
    void SpawnWave();
    void ShakeOnly();
    void ExecuteUbergraph_SEQ_BossEyeManagerBigRoom(int32 EntryPoint);
}; // Size: 0x271

#endif
