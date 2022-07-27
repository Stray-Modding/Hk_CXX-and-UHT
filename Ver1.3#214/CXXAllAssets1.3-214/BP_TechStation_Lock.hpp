#ifndef UE4SS_SDK_BP_TechStation_Lock_HPP
#define UE4SS_SDK_BP_TechStation_Lock_HPP

class ABP_TechStation_Lock_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UArrowComponent* dronePos_Grabbable;                                        // 0x0230 (size: 0x8)
    class UArrowComponent* dronePos_hack;                                             // 0x0238 (size: 0x8)
    class UArrowComponent* dronePos_Ejected;                                          // 0x0240 (size: 0x8)
    class UCOMP_UsableDroneTimer_C* COMP_UsableDroneTimer;                            // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Truck_Bumper_R;                                       // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Truck_Bumper_L;                                       // 0x0258 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint03;                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint02;                                 // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Electrical_Plug;                                      // 0x0270 (size: 0x8)
    class UStaticMeshComponent* WoodPlane_03;                                         // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Ending_ControlRoom_Cabinet_3;                         // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet;                                    // 0x0288 (size: 0x8)
    class USceneComponent* PlugPivot;                                                 // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Main_Cabinet;                                         // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    FBP_TechStation_Lock_COnLockStationDisabled OnLockStationDisabled;                // 0x02A8 (size: 0x10)
    void OnLockStationDisabled(class ABP_TechStation_Lock_C* Station);
    bool hasBeenHacked;                                                               // 0x02B8 (size: 0x1)
    class ACameraActor* Camera_Hack_1;                                                // 0x02C0 (size: 0x8)
    class AActor* CatPosAfter;                                                        // 0x02C8 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__BP_TechCabinet_Lock_COMP_UsableDroneTimer_K2Node_ComponentBoundEvent_1_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void ReceiveBeginPlay();
    void BndEvt__BP_TechStation_Lock_COMP_UsableDroneTimer_K2Node_ComponentBoundEvent_2_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void Lock_Station_Is_Hackable();
    void Enable_Lock_Station();
    void ExecuteUbergraph_BP_TechStation_Lock(int32 EntryPoint);
    void OnLockStationDisabled__DelegateSignature(class ABP_TechStation_Lock_C* Station);
}; // Size: 0x2D0

#endif
