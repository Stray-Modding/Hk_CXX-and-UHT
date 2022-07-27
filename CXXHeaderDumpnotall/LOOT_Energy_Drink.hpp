#ifndef UE4SS_SDK_LOOT_Energy_Drink_HPP
#define UE4SS_SDK_LOOT_Energy_Drink_HPP

class ALOOT_Energy_Drink_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_LootableComponent;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Energy_Drink(int32 EntryPoint);
};

#endif
