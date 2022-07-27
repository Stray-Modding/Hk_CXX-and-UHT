#ifndef UE4SS_SDK_LOOT_Postit_clue_01_HPP
#define UE4SS_SDK_LOOT_Postit_clue_01_HPP

class ALOOT_Postit_clue_01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class ASeq_postit_clue_01_C* seq_postit_clue;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Postit_clue_01(int32 EntryPoint);
};

#endif
