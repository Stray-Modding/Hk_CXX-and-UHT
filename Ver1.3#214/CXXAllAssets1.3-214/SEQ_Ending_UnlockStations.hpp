#ifndef UE4SS_SDK_SEQ_Ending_UnlockStations_HPP
#define UE4SS_SDK_SEQ_Ending_UnlockStations_HPP

class ASEQ_Ending_UnlockStations_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UAudioComponent* vibration;                                                 // 0x0270 (size: 0x8)
    class ABP_Scratchable_ControlRoom_Desk_A_C* Scratchable_DeskA_1;                  // 0x0278 (size: 0x8)
    class ABP_Scratchable_ControlRoom_Box_C* Scratchable_GroundBox_2;                 // 0x0280 (size: 0x8)
    class ABP_Scratchable_ControlRoom_Desk_B_C* Scratchable_DeskB_3;                  // 0x0288 (size: 0x8)
    class ABP_TechStation_Lock_C* Lock_Station_1;                                     // 0x0290 (size: 0x8)
    class ABP_TechStation_Lock_C* Lock_Station_2;                                     // 0x0298 (size: 0x8)
    class ABP_TechStation_Lock_C* Lock_Station_3;                                     // 0x02A0 (size: 0x8)
    class ABP_TechStation_Lock_C* Current_Station;                                    // 0x02A8 (size: 0x8)
    class ABP_AlarmTrigger_C* AlarmTrigger_Seq;                                       // 0x02B0 (size: 0x8)
    class ASeq_Ending_AlertSentinel_C* SEQ_AlertSentinel;                             // 0x02B8 (size: 0x8)
    class ACameraActor* Camera_Alarm_1;                                               // 0x02C0 (size: 0x8)
    class ACameraActor* Camera_Alarm_2;                                               // 0x02C8 (size: 0x8)
    class ADial_B12_Deterioration_C* Dial_B12_Deterioration;                          // 0x02D0 (size: 0x8)
    class ABP_Station_DoorControl_C* Station_Door;                                    // 0x02D8 (size: 0x8)
    class ABP_Drone_C* Drone;                                                         // 0x02E0 (size: 0x8)
    int32 Nb_Of_Lock;                                                                 // 0x02E8 (size: 0x4)
    class UParticleSystemComponent* FX_Drone_Smoke;                                   // 0x02F0 (size: 0x8)
    class UParticleSystemComponent* FX_Drone_Taze;                                    // 0x02F8 (size: 0x8)
    bool Alarm_Shots_Done;                                                            // 0x0300 (size: 0x1)
    class ABP_Drone_Grab_Jail_C* DroneGrabJail;                                       // 0x0308 (size: 0x8)
    bool keepDroneOut;                                                                // 0x0310 (size: 0x1)
    bool PreventFallingDroneUnderMap;                                                 // 0x0311 (size: 0x1)
    FTransform Drone_TransTemp;                                                       // 0x0320 (size: 0x30)
    FVector GUI_Drone_Relative Location;                                              // 0x0350 (size: 0xC)

    void Complete_6246EF4646E19036986D72BA365A5F47();
    void Tick_6246EF4646E19036986D72BA365A5F47(float Ratio);
    void Complete_6246EF4646E19036986D72BA24C7F552();
    void Tick_6246EF4646E19036986D72BA24C7F552(float Ratio);
    void BndEvt__SEQ_Ending_UnlockStations_m_streamingComponent_K2Node_ComponentBoundEvent_3_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void StartAlarm_shots();
    void ActivateAllStations();
    void BndEvt__SEQ_Ending_UnlockStations_Lock_Station_1_K2Node_ComponentBoundEvent_4_OnLockStationDisabled__DelegateSignature(class ABP_TechStation_Lock_C* Station);
    void BndEvt__SEQ_Ending_UnlockStations_Lock_Station_2_K2Node_ComponentBoundEvent_5_OnLockStationDisabled__DelegateSignature(class ABP_TechStation_Lock_C* Station);
    void BndEvt__SEQ_Ending_UnlockStations_Lock_Station_3_K2Node_ComponentBoundEvent_6_OnLockStationDisabled__DelegateSignature(class ABP_TechStation_Lock_C* Station);
    void ReceiveTick(float DeltaSeconds);
    void Stop_FXsparkLoop();
    void Start_FXsparkLopp();
    void ExecuteUbergraph_SEQ_Ending_UnlockStations(int32 EntryPoint);
}; // Size: 0x35C

#endif
