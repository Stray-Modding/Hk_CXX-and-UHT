#ifndef UE4SS_SDK_Seq_Ending_UnlockSasDoor_HPP
#define UE4SS_SDK_Seq_Ending_UnlockSasDoor_HPP

class ASeq_Ending_UnlockSasDoor_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Ending_SasDoor_C* Sas_door_to_unlock;                                   // 0x0270 (size: 0x8)
    class ABP_ControlPanel_Sas_C* Hackable_Panel;                                     // 0x0278 (size: 0x8)
    class ABP_CatButton_Scratchable_PanelSas_C* Scratchable_Panel;                    // 0x0280 (size: 0x8)
    class ATriggerZone_C* LabRobot_Zone;                                              // 0x0288 (size: 0x8)
    class ABP_Lab_Robot_TrashZone_C* Lab_Robot;                                       // 0x0290 (size: 0x8)
    class ADial_B12_BeforeControlRoom_C* Dial_B12;                                    // 0x0298 (size: 0x8)
    FText Displayed Name_Hack;                                                        // 0x02A0 (size: 0x18)
    class ABP_CameraZone_C* CameraZone;                                               // 0x02B8 (size: 0x8)
    FTransform TransTemp;                                                             // 0x02C0 (size: 0x30)
    bool HackValid;                                                                   // 0x02F0 (size: 0x1)
    bool IsLabBotInPosition;                                                          // 0x02F1 (size: 0x1)
    bool FirstTimeHacked;                                                             // 0x02F2 (size: 0x1)
    bool SafeMvt_Cat;                                                                 // 0x02F3 (size: 0x1)
    class AActor* SafePoint_Cat_Left;                                                 // 0x02F8 (size: 0x8)
    class AActor* SafePoint_Cat_Right;                                                // 0x0300 (size: 0x8)
    class AActor* CameraDoorOpened;                                                   // 0x0308 (size: 0x8)
    class AActor* TP_DronePos;                                                        // 0x0310 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA31FE8651();
    void Tick_6246EF4646E19036986D72BA31FE8651(float Ratio);
    void BndEvt__Seq_Ending_UnlockSasDoor_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void On_Scratch_Ended_Event_0();
    void RobotHasEnteredZone();
    void On_Panel_Hacked_Event_0();
    void On_Panel_Start_Hacking_Event_0();
    void AfterMoveUseStarted_Event_0(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ReceiveTick(float DeltaSeconds);
    void AfterUseDone_Event_0(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ExecuteUbergraph_Seq_Ending_UnlockSasDoor(int32 EntryPoint);
}; // Size: 0x318

#endif
