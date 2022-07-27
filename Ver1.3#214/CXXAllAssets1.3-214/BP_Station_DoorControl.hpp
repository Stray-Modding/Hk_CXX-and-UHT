#ifndef UE4SS_SDK_BP_Station_DoorControl_HPP
#define UE4SS_SDK_BP_Station_DoorControl_HPP

class ABP_Station_DoorControl_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USkeletalMeshComponent* drone_mesh;                                         // 0x0230 (size: 0x8)
    class UCOMP_GrabbableDrop_C* COMP_GrabbableDrop;                                  // 0x0238 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Main_Screen;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Desk;                                                 // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    TEnumAsByte<E_StationRoofControl> Previous_State;                                 // 0x0260 (size: 0x1)
    TEnumAsByte<E_StationRoofControl> State;                                          // 0x0261 (size: 0x1)
    bool LockAfterON;                                                                 // 0x0262 (size: 0x1)
    bool Turned_ON_and_Locked_Finished;                                               // 0x0263 (size: 0x1)
    class ASEQ_Ending_UnlockStations_C* Seq_Unlock;                                   // 0x0268 (size: 0x8)
    class ADial_B12_FinalGoodbye_C* Dia_B12_Final;                                    // 0x0270 (size: 0x8)
    class ABP_SpeedModifier_Zone_C* SpeedModifyer to activate;                        // 0x0278 (size: 0x8)
    int32 Nb_Of_Lock_Active;                                                          // 0x0280 (size: 0x4)
    FTransform DroneTransf;                                                           // 0x0290 (size: 0x30)
    bool IsAlarmScreenVisible;                                                        // 0x02C0 (size: 0x1)
    class ABP_Drone_Grab_Jail_C* BP Drone Grab Jail;                                  // 0x02C8 (size: 0x8)
    class ABP_Drone_Grab_Jail_C* As BP Drone Grab Jail;                               // 0x02D0 (size: 0x8)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BADA7E2FA9();
    void Tick_6246EF4646E19036986D72BADA7E2FA9(float Ratio);
    void Complete_6246EF4646E19036986D72BAFB65C86E();
    void Tick_6246EF4646E19036986D72BAFB65C86E(float Ratio);
    void Complete_6246EF4646E19036986D72BADB2362AF();
    void Tick_6246EF4646E19036986D72BADB2362AF(float Ratio);
    void BndEvt__BP_DoorConsole_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Change_StationRoof_State(TEnumAsByte<E_StationRoofControl> New State);
    void UpdateScreenDependingOnNumberOfLock();
    void DecrementLockScreen();
    void StopAlarmeScreenLoop();
    void BndEvt__BP_Station_DoorControl_COMP_GrabbableDrop_K2Node_ComponentBoundEvent_3_ReleaseGrabbable_InZone__DelegateSignature(class ABP_CatPawn_C* cat, class UCOMP_Grabbable_C* Grabbable);
    void ExecuteUbergraph_BP_Station_DoorControl(int32 EntryPoint);
}; // Size: 0x2D8

#endif
