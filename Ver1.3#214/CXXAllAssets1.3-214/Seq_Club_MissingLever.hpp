#ifndef UE4SS_SDK_Seq_Club_MissingLever_HPP
#define UE4SS_SDK_Seq_Club_MissingLever_HPP

class ASeq_Club_MissingLever_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_SwitchWithJump_C* lever_switch;                                         // 0x0270 (size: 0x8)
    class UCOMP_UsableItem_C* Usable_Lever;                                           // 0x0278 (size: 0x8)
    FName ID_To_Get;                                                                  // 0x0280 (size: 0x8)
    class ABP_DiscoBall_C* DiscoBall;                                                 // 0x0288 (size: 0x8)
    TArray<class ABP_TiltingClubLamp_C*> LampToMoveUp;                                // 0x0290 (size: 0x10)
    bool FirstTriggerDone;                                                            // 0x02A0 (size: 0x1)
    bool IsDroidDJOccupied;                                                           // 0x02A1 (size: 0x1)
    bool Lever_Repaired;                                                              // 0x02A2 (size: 0x1)

    void UserConstructionScript();
    void BndEvt__Seq_Club_MissingLever_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ItemUsed_Event_0(class ULootableComponent* Item);
    void LogicTrigger();
    void SetDjoccupied(bool IsDroidDJOccupied);
    void AfterUseDone_Event_0(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ExecuteUbergraph_Seq_Club_MissingLever(int32 EntryPoint);
}; // Size: 0x2A3

#endif
