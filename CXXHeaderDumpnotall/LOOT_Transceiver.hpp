#ifndef UE4SS_SDK_LOOT_Transceiver_HPP
#define UE4SS_SDK_LOOT_Transceiver_HPP

class ALOOT_Transceiver_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class USaveComponent* Save;
    class UStaticMeshComponent* Cube;
    class USceneComponent* DefaultSceneRoot;
    bool Lootable ?;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Transceiver(int32 EntryPoint);
};

#endif
