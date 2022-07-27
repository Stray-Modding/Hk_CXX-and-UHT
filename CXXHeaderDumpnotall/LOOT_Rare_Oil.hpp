#ifndef UE4SS_SDK_LOOT_Rare_Oil_HPP
#define UE4SS_SDK_LOOT_Rare_Oil_HPP

class ALOOT_Rare_Oil_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Super_Detergent;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class USceneComponent* DefaultSceneRoot;
    class ADial_Elliot_C* Dial Elliot;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Rare_Oil(int32 EntryPoint);
};

#endif
