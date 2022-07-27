#ifndef UE4SS_SDK_BP_UsableTranceiver_HPP
#define UE4SS_SDK_BP_UsableTranceiver_HPP

class ABP_UsableTranceiver_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Transceiver;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Electric_Box_07_c;                                    // 0x0238 (size: 0x8)
    class UArrowComponent* ItemPosition;                                              // 0x0240 (size: 0x8)
    class UArrowComponent* DronePosition;                                             // 0x0248 (size: 0x8)
    class UCOMP_UsableItem_C* COMP_UsableItem;                                        // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0258 (size: 0x8)
    TArray<class AActor*> ActorToTrigger;                                             // 0x0260 (size: 0x10)

    void ReceiveBeginPlay();
    void BndEvt__COMP_UsableItem_K2Node_ComponentBoundEvent_1_ItemUsed__DelegateSignature(class ULootableComponent* Item);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_UsableTranceiver(int32 EntryPoint);
}; // Size: 0x270

#endif
