#ifndef UE4SS_SDK_BP_SwitchTrigger_WaitForLoad_HPP
#define UE4SS_SDK_BP_SwitchTrigger_WaitForLoad_HPP

class ABP_SwitchTrigger_WaitForLoad_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_UsableDrone_WaitForStreaming_C* COMP_UsableDrone_WaitForStreaming;    // 0x0230 (size: 0x8)
    class UStaticMeshComponent* CableAlpha01_Joint02;                                 // 0x0238 (size: 0x8)
    class UStaticMeshComponent* ElectricBox01;                                        // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_010;                                      // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_09;                                       // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_08;                                       // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_07;                                       // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_06;                                       // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Metal_stuff_14;                                       // 0x0270 (size: 0x8)
    class USceneComponent* DroneAnchor;                                               // 0x0278 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0280 (size: 0x8)
    class UStaticMeshComponent* ElectricBox00;                                        // 0x0288 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0290 (size: 0x8)
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x0298 (size: 0x8)
    class UMaterialInstanceDynamic* Dynamat_on_off;                                   // 0x02A0 (size: 0x8)
    class UAudioComponent* NewVar_1;                                                  // 0x02A8 (size: 0x8)
    TArray<class AActor*> ActorToTrigger;                                             // 0x02B0 (size: 0x10)
    bool IsDestroyed;                                                                 // 0x02C0 (size: 0x1)
    bool IsActivated;                                                                 // 0x02C1 (size: 0x1)
    bool DisableAfterFirstUse;                                                        // 0x02C2 (size: 0x1)
    bool Enable;                                                                      // 0x02C3 (size: 0x1)
    TArray<class AActor*> ActorToTrigger_AtUseStarted;                                // 0x02C8 (size: 0x10)

    void IsTriggered(bool& IsTriggered);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Destroy();
    void LogicTrigger();
    void BndEvt__BP_SwitchTrigger_WaitForLoad_COMP_UsableDrone_WaitForStreaming_K2Node_ComponentBoundEvent_0_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void BndEvt__BP_SwitchTrigger_WaitForLoad_COMP_UsableDrone_WaitForStreaming_K2Node_ComponentBoundEvent_1_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void ExecuteUbergraph_BP_SwitchTrigger_WaitForLoad(int32 EntryPoint);
}; // Size: 0x2D8

#endif
