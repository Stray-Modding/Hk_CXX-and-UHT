#ifndef UE4SS_SDK_LOOT_Postit_clue_01_HPP
#define UE4SS_SDK_LOOT_Postit_clue_01_HPP

class ALOOT_Postit_clue_01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UCOMP_Lootable_C* COMP_LootableComponent;                                   // 0x0240 (size: 0x8)
    class ASeq_postit_clue_01_C* seq_postit_clue;                                     // 0x0248 (size: 0x8)

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Postit_clue_01(int32 EntryPoint);
}; // Size: 0x250

#endif
