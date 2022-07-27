#ifndef UE4SS_SDK_Seq_MeetB12_HPP
#define UE4SS_SDK_Seq_MeetB12_HPP

class ASeq_MeetB12_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class ACameraActor* Camera Launch;                                                // 0x0278 (size: 0x8)
    class ACameraActor* Camera Launch_2;                                              // 0x0280 (size: 0x8)
    class AActor* Cat_JumpPos_Meet;                                                   // 0x0288 (size: 0x8)
    class AActor* Drone_Props;                                                        // 0x0290 (size: 0x8)
    class ALevelSequenceActor* Sequence_Meet_Anim;                                    // 0x0298 (size: 0x8)
    class AActor* Cat_Pos_Meet;                                                       // 0x02A0 (size: 0x8)
    class ADial_B12Flat_FirstMeet_C* Dia_B12_FirstTime;                               // 0x02A8 (size: 0x8)
    class ABP_OrientCameraThirdPersonZone_C* Orient_Cam_Keys;                         // 0x02B0 (size: 0x8)
    class AActor* Drone_Pos_keys;                                                     // 0x02B8 (size: 0x8)
    class ABP_Light_NeonLarge_Child_RealTime_C* Light_Keys;                           // 0x02C0 (size: 0x8)
    class ABP_Dialog_Zone_C* Dia_Zone_keys;                                           // 0x02C8 (size: 0x8)
    class ADial_B12Flat_Tuto_2_PutBackpack_C* Dial_PutBackpack;                       // 0x02D0 (size: 0x8)
    class AStaticMeshActor* Loupe_Backpack;                                           // 0x02D8 (size: 0x8)
    class ASpotLight* Light_Backpack;                                                 // 0x02E0 (size: 0x8)
    class ABP_Dialog_Zone_C* Dia_Zone_Backpack;                                       // 0x02E8 (size: 0x8)
    class ABP_SplineRail_C* Rail_Backpack;                                            // 0x02F0 (size: 0x8)
    class ABP_SwitchTriggerUsableItem_C* Door_Exit_Trigger;                           // 0x02F8 (size: 0x8)
    class ABP_OrientCameraThirdPersonZone_C* Door_Exit_Trigger_CamModifier;           // 0x0300 (size: 0x8)
    TArray<class AActor*> Talkables;                                                  // 0x0308 (size: 0x10)

    void CineEnd();
    void DroneOnkeys();
    void DroneOnBackPack();
    void Lock_Door_Exit();
    void Unlock_Door_Exit();
    void After LAunch();
    void StartLaunch();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Seq_MeetB12_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Seq_MeetB12(int32 EntryPoint);
}; // Size: 0x318

#endif
