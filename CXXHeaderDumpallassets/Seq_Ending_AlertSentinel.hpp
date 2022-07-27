#ifndef UE4SS_SDK_Seq_Ending_AlertSentinel_HPP
#define UE4SS_SDK_Seq_Ending_AlertSentinel_HPP

class ASeq_Ending_AlertSentinel_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Ending_FakeSentinel_C* ForcingDoorSentinel_2;                           // 0x0270 (size: 0x8)
    class AStaticMeshActor* TrapDoor;                                                 // 0x0278 (size: 0x8)
    class AActor* Cam_00;                                                             // 0x0280 (size: 0x8)
    class AActor* Cam_03;                                                             // 0x0288 (size: 0x8)
    class ABP_Ending_SasDoor_C* Sas_Door_1;                                           // 0x0290 (size: 0x8)
    TArray<class ABP_Ending_SplineSentinel_C*> Following Sentinels;                   // 0x0298 (size: 0x10)
    class AActor* Cam_01;                                                             // 0x02A8 (size: 0x8)
    class AActor* Cam_02;                                                             // 0x02B0 (size: 0x8)
    class ABP_Ending_FakeSentinel_C* ForcingDoorSentinel_1;                           // 0x02B8 (size: 0x8)
    TArray<class ABP_Ending_SplineSentinel_C*> Approaching Sentinels;                 // 0x02C0 (size: 0x10)
    bool Shot1Done;                                                                   // 0x02D0 (size: 0x1)
    bool Shot2Done;                                                                   // 0x02D1 (size: 0x1)

    void LogicTrigger();
    void StartSentinel();
    void Shot 1();
    void Shot 2();
    void Shut Down Sentinels();
    void ExecuteUbergraph_Seq_Ending_AlertSentinel(int32 EntryPoint);
}; // Size: 0x2D2

#endif
