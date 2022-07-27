#ifndef UE4SS_SDK_BP_InteractiveBoomer_HPP
#define UE4SS_SDK_BP_InteractiveBoomer_HPP

class ABP_InteractiveBoomer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UArrowComponent* DronePosition;                                             // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)
    class UCOMP_UsableItem_C* COMP_UsableItem;                                        // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0250 (size: 0x8)
    class AActor* ActorToTrigger;                                                     // 0x0258 (size: 0x8)
    bool InteractedOnce;                                                              // 0x0260 (size: 0x1)

    void ReceiveBeginPlay();
    void BndEvt__COMP_UsableItem_K2Node_ComponentBoundEvent_1_ItemUsed__DelegateSignature(class ULootableComponent* Item);
    void ExecuteUbergraph_BP_InteractiveBoomer(int32 EntryPoint);
}; // Size: 0x261

#endif
