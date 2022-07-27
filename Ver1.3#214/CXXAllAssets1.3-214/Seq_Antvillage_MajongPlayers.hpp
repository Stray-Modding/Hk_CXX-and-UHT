#ifndef UE4SS_SDK_Seq_Antvillage_MajongPlayers_HPP
#define UE4SS_SDK_Seq_Antvillage_MajongPlayers_HPP

class ASeq_Antvillage_MajongPlayers_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UCOMP_CatUsableSpecialOverride_C* COMP_CatUsableSpecialOverride;            // 0x0278 (size: 0x8)
    class ABP_Droid_C* Player01;                                                      // 0x0280 (size: 0x8)
    class ABP_Droid_C* Player02;                                                      // 0x0288 (size: 0x8)
    class AActor* Majong;                                                             // 0x0290 (size: 0x8)
    class ATriggerZone_C* TriggerReset02;                                             // 0x0298 (size: 0x8)
    bool GameDestroyed;                                                               // 0x02A0 (size: 0x1)
    class ATriggerZone_C* TriggerDestroy;                                             // 0x02A8 (size: 0x8)
    class ATriggerZone_C* TriggerReset01;                                             // 0x02B0 (size: 0x8)
    class ATriggerZone_C* TriggerReset03;                                             // 0x02B8 (size: 0x8)

    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void OnStartSequence();
    void Cancel_DestroyAnim();
    void Play_Majong_Loop();
    void ExecuteUbergraph_Seq_Antvillage_MajongPlayers(int32 EntryPoint);
}; // Size: 0x2C0

#endif
