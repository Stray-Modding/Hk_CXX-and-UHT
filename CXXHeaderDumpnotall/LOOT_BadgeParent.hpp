#ifndef UE4SS_SDK_LOOT_BadgeParent_HPP
#define UE4SS_SDK_LOOT_BadgeParent_HPP

class ALOOT_BadgeParent_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCOMP_Lootable_C* COMP_Lootable;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__LOOT_BadgeParent_COMP_Lootable_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_BadgeParent(int32 EntryPoint);
};

#endif
