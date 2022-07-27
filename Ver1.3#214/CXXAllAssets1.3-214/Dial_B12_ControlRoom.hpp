#ifndef UE4SS_SDK_Dial_B12_ControlRoom_HPP
#define UE4SS_SDK_Dial_B12_ControlRoom_HPP

class ADial_B12_ControlRoom_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool [DEBUG] ShortcutEndCine;                                                     // 0x0340 (size: 0x1)
    class ATechRoom_Chair_Bottom_C* Chair_MainComputer;                               // 0x0348 (size: 0x8)
    class AInvisiPoint_C* CatPos_Exposition;                                          // 0x0350 (size: 0x8)
    class AInvisiPoint_C* CatPos_StartUnlock;                                         // 0x0358 (size: 0x8)
    class ACameraActor* Camera_MainComputer_Large;                                    // 0x0360 (size: 0x8)
    class ACameraActor* Camera_MainComputer_Close;                                    // 0x0368 (size: 0x8)
    class ACameraActor* Camera_MainComputer_LookAtB12;                                // 0x0370 (size: 0x8)
    class ACameraActor* Camera_ComputerDesks;                                         // 0x0378 (size: 0x8)
    class ACameraActor* Camera_DoorStation;                                           // 0x0380 (size: 0x8)
    class AActor* DronePos_Overview;                                                  // 0x0388 (size: 0x8)
    class AActor* DronePos_HackSmallScreen;                                           // 0x0390 (size: 0x8)
    class AActor* DronePos_LookAtDesks;                                               // 0x0398 (size: 0x8)
    class AActor* DronePos_LookAtStationDoor;                                         // 0x03A0 (size: 0x8)
    TArray<class AActor*> DronePos_others;                                            // 0x03A8 (size: 0x10)
    class ABP_SwitchTrigger_C* Usable_Trigger;                                        // 0x03B8 (size: 0x8)
    class ASEQ_Ending_TurnOnComputers_C* SEQ_TurnOffComputers;                        // 0x03C0 (size: 0x8)
    class ABP_Station_DoorControl_C* ComputerStation_Door;                            // 0x03C8 (size: 0x8)
    bool Exposition;                                                                  // 0x03D0 (size: 0x1)
    class AActor* NewPosTemp;                                                         // 0x03D8 (size: 0x8)
    bool Loop_Broken;                                                                 // 0x03E0 (size: 0x1)
    class UCOMP_InteractStartB12Dial_C* Dial_Temp_Help;                               // 0x03E8 (size: 0x8)
    bool TurnONcomputer_Help;                                                         // 0x03F0 (size: 0x1)
    class ASEQ_Ending_UnlockStations_C* Seq_Unlock;                                   // 0x03F8 (size: 0x8)
    class AActor* CameraOrientThird;                                                  // 0x0400 (size: 0x8)
    class AActor* DronePosDial;                                                       // 0x0408 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_DoorStation_Spline;                   // 0x0410 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA2D7934CF();
    void Tick_6246EF4646E19036986D72BA2D7934CF(float Ratio);
    void OnDialogBegan();
    void LogicTrigger();
    void Exposition_MainComputer();
    void AfterAllComputersTurnedON();
    void Break_B12_Loop();
    void ExecuteUbergraph_Dial_B12_ControlRoom(int32 EntryPoint);
}; // Size: 0x418

#endif
