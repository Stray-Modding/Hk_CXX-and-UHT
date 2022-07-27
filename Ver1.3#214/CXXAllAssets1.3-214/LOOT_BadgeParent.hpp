#ifndef UE4SS_SDK_LOOT_BadgeParent_HPP
#define UE4SS_SDK_LOOT_BadgeParent_HPP

class ALOOT_BadgeParent_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_Lootable_C* COMP_Lootable;                                            // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    void BndEvt__LOOT_BadgeParent_COMP_Lootable_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_BadgeParent(int32 EntryPoint);
}; // Size: 0x240

#endif
