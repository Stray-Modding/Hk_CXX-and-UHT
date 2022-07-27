#ifndef UE4SS_SDK_Seq_Ending_AfterRoofOpen_HPP
#define UE4SS_SDK_Seq_Ending_AfterRoofOpen_HPP

class ASeq_Ending_AfterRoofOpen_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Droid_Sweeper;                                                 // 0x0270 (size: 0x8)
    class AInvisiPoint_C* Point_TP_Sweeper;                                           // 0x0278 (size: 0x8)
    class ABP_Droid_C* Droid_Gardener;                                                // 0x0280 (size: 0x8)
    class AInvisiPoint_C* Point_TP_Gardener;                                          // 0x0288 (size: 0x8)
    class AActor* Broom_Sweep;                                                        // 0x0290 (size: 0x8)
    class AActor* Broom_End;                                                          // 0x0298 (size: 0x8)
    class ATriggerZone_C* TriggerZone_ExitDoor;                                       // 0x02A0 (size: 0x8)
    class ABP_Ending_SasDoor_C* Sas_Door_1;                                           // 0x02A8 (size: 0x8)
    class ABP_Ending_SasDoor_C* Sas_Door_2;                                           // 0x02B0 (size: 0x8)
    class ABP_Ending_Door_C* Ending_Door;                                             // 0x02B8 (size: 0x8)
    bool RoofOpened;                                                                  // 0x02C0 (size: 0x1)

    void LogicTrigger();
    void BndEvt__Seq_Ending_AfterRoofOpen_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void AterRoofOpened();
    void ExecuteUbergraph_Seq_Ending_AfterRoofOpen(int32 EntryPoint);
}; // Size: 0x2C1

#endif
