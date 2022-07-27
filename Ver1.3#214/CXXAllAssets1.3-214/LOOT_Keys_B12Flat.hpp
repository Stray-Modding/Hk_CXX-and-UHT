#ifndef UE4SS_SDK_LOOT_Keys_B12Flat_HPP
#define UE4SS_SDK_LOOT_Keys_B12Flat_HPP

class ALOOT_Keys_B12Flat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Electric_stuff_05;                                    // 0x0230 (size: 0x8)
    class UStaticMeshComponent* key_set_07;                                           // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Object123;                                            // 0x0248 (size: 0x8)
    class UStaticMeshComponent* key_set_06;                                           // 0x0250 (size: 0x8)
    class UCOMP_Lootable_C* COMP_LootableComponent;                                   // 0x0258 (size: 0x8)
    class UStaticMeshComponent* key_set_05;                                           // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Keys_B12Flat(int32 EntryPoint);
}; // Size: 0x270

#endif
