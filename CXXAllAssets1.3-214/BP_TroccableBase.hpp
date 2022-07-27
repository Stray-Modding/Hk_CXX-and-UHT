#ifndef UE4SS_SDK_BP_TroccableBase_HPP
#define UE4SS_SDK_BP_TroccableBase_HPP

class ABP_TroccableBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UCOMP_Troccable_C* COMP_Troccable;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    TEnumAsByte<E_BartermanLoot> Object;                                              // 0x0250 (size: 0x1)
    FName LootIDToPay;                                                                // 0x0254 (size: 0x8)
    int32 NbOfLootToPay;                                                              // 0x025C (size: 0x4)
    TSubclassOf<class AActor> LootToGive;                                             // 0x0260 (size: 0x8)
    bool HasBeenBought;                                                               // 0x0268 (size: 0x1)

    void ReceiveBeginPlay();
    void DisableTroccable();
    void ExecuteUbergraph_BP_TroccableBase(int32 EntryPoint);
}; // Size: 0x269

#endif
