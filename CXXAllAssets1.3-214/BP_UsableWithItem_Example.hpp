#ifndef UE4SS_SDK_BP_UsableWithItem_Example_HPP
#define UE4SS_SDK_BP_UsableWithItem_Example_HPP

class ABP_UsableWithItem_Example_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* ElectricBox08;                                        // 0x0230 (size: 0x8)
    class UStaticMeshComponent* ElectricBox07;                                        // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Big_Fuse;                                             // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet15;                                  // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet14;                                  // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Electric_Box_02_b;                                    // 0x0258 (size: 0x8)
    class UStaticMeshComponent* ElectricBox06;                                        // 0x0260 (size: 0x8)
    class UStaticMeshComponent* ElectricBox03;                                        // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet13;                                  // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet12;                                  // 0x0278 (size: 0x8)
    class UStaticMeshComponent* LCDscreen02;                                          // 0x0280 (size: 0x8)
    class UStaticMeshComponent* LCDscreen01;                                          // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet11;                                  // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet10;                                  // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Electric_Box_07_b;                                    // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet7;                                   // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet6;                                   // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet5;                                   // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet4;                                   // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet3;                                   // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Electrical_Outlet2;                                   // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint00;                                 // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Electric_Box_05;                                      // 0x02E0 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x02E8 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper amb;                                // 0x02F0 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper engine;                             // 0x02F8 (size: 0x8)
    class UArrowComponent* RikoPosition;                                              // 0x0300 (size: 0x8)
    class UArrowComponent* DronePosition;                                             // 0x0308 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0310 (size: 0x8)
    class UCOMP_UsableItem_C* COMP_UsableItem;                                        // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0320 (size: 0x8)
    TArray<class AActor*> ActorToTrigger;                                             // 0x0328 (size: 0x10)
    bool is on;                                                                       // 0x0338 (size: 0x1)
    class ADial_B12FusibleMachine_C* B12_Dial;                                        // 0x0340 (size: 0x8)
    bool B12_Hint;                                                                    // 0x0348 (size: 0x1)
    class UMaterialInstanceDynamic* Color_Material;                                   // 0x0350 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__COMP_UsableItem_K2Node_ComponentBoundEvent_1_ItemUsed__DelegateSignature(class ULootableComponent* Item);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_UsableWithItem_Example_Save_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void turn on();
    void BndEvt__BP_UsableWithItem_Example_COMP_UsableItem_K2Node_ComponentBoundEvent_4_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void DeactivateB12Hint();
    void LogicTrigger();
    void ExecuteUbergraph_BP_UsableWithItem_Example(int32 EntryPoint);
}; // Size: 0x358

#endif
