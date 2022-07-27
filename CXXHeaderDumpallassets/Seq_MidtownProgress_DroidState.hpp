#ifndef UE4SS_SDK_Seq_MidtownProgress_DroidState_HPP
#define UE4SS_SDK_Seq_MidtownProgress_DroidState_HPP

class ASeq_MidtownProgress_DroidState_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TEnumAsByte<E_MidtownProgressState> State;                                        // 0x0270 (size: 0x1)
    class ASeq_Midtown_First_Arrest_C* Arrest_Beginning_Seq;                          // 0x0278 (size: 0x8)
    class ABP_Crossroad_Holo_C* hologram;                                             // 0x0280 (size: 0x8)
    class ABP_Droid_C* Droid_Cop_Ranger_1;                                            // 0x0288 (size: 0x8)
    class ABP_Droid_C* Droid_Cop_Desk;                                                // 0x0290 (size: 0x8)
    class ABP_DoorWindowBase_C* Door_Station;                                         // 0x0298 (size: 0x8)
    class ABP_Droid_C* Droid_shopkeeper;                                              // 0x02A0 (size: 0x8)
    TArray<class AActor*> ClothesShop_ActorToActivate;                                // 0x02A8 (size: 0x10)
    class ASeq_HatShop_Delivery_C* Seq_HatShop;                                       // 0x02B8 (size: 0x8)

    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void AfterMeetingClem();
    void AfterTrashZone();
    void GoToClub();
    void MidtownBegining();
    void UpdateState();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Seq_MidtownProgress_DroidState(int32 EntryPoint);
}; // Size: 0x2C0

#endif
