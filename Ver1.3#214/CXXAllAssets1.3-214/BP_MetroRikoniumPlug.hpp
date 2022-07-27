#ifndef UE4SS_SDK_BP_MetroRikoniumPlug_HPP
#define UE4SS_SDK_BP_MetroRikoniumPlug_HPP

class ABP_MetroRikoniumPlug_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UArrowComponent* SoundScreen;                                               // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Riconium;                                             // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0240 (size: 0x8)
    class UCOMP_CameraTarget_C* COMP_CameraTarget;                                    // 0x0248 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0250 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0258 (size: 0x8)
    class UCOMP_UsableItem_C* COMP_UsableItem;                                        // 0x0260 (size: 0x8)
    class UArrowComponent* RikoPosition;                                              // 0x0268 (size: 0x8)
    class UArrowComponent* DronePosition;                                             // 0x0270 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x0278 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0280 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0288 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0290 (size: 0x8)
    class AActor* ActorToTrigger;                                                     // 0x0298 (size: 0x8)
    class AActor* splineSfxToTrigger;                                                 // 0x02A0 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__COMP_UsableItem_K2Node_ComponentBoundEvent_1_ItemUsed__DelegateSignature(class ULootableComponent* Item);
    void BndEvt__BP_MetroRikoniumPlug_COMP_UsableItem_K2Node_ComponentBoundEvent_0_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void BndEvt__BP_MetroRikoniumPlug_COMP_UsableItem_K2Node_ComponentBoundEvent_2_DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void ExecuteUbergraph_BP_MetroRikoniumPlug(int32 EntryPoint);
}; // Size: 0x2A8

#endif
