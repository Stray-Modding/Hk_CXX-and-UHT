#ifndef UE4SS_SDK_BP_SwitchTriggerUsableItem_HPP
#define UE4SS_SDK_BP_SwitchTriggerUsableItem_HPP

class ABP_SwitchTriggerUsableItem_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_UsableItem_C* COMP_UsableItem;                                        // 0x0230 (size: 0x8)
    class USceneComponent* DroneAnchor;                                               // 0x0238 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0240 (size: 0x8)
    class UStaticMeshComponent* ElectricBox00;                                        // 0x0248 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0250 (size: 0x8)
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x0258 (size: 0x8)
    class UMaterialInstanceDynamic* Dynamat_on_off;                                   // 0x0260 (size: 0x8)
    class UAudioComponent* NewVar_1;                                                  // 0x0268 (size: 0x8)
    TArray<class AActor*> ActorToTrigger;                                             // 0x0270 (size: 0x10)
    bool IsDestroyed;                                                                 // 0x0280 (size: 0x1)
    bool IsActivated;                                                                 // 0x0281 (size: 0x1)
    bool DoOnce;                                                                      // 0x0282 (size: 0x1)
    bool DestroyItemAfterUse;                                                         // 0x0283 (size: 0x1)
    FName ItemId;                                                                     // 0x0284 (size: 0x8)

    void IsTriggered(bool& IsDestroyed);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Destroy();
    void BndEvt__COMP_UsableItem_K2Node_ComponentBoundEvent_1_ItemUsed__DelegateSignature(class ULootableComponent* Item);
    void BndEvt__COMP_UsableItem_K2Node_ComponentBoundEvent_0_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void BndEvt__COMP_UsableItem_K2Node_ComponentBoundEvent_3_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void Enable();
    void ExecuteUbergraph_BP_SwitchTriggerUsableItem(int32 EntryPoint);
}; // Size: 0x28C

#endif
