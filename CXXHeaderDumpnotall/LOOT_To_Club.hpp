#ifndef UE4SS_SDK_LOOT_To_Club_HPP
#define UE4SS_SDK_LOOT_To_Club_HPP

class ALOOT_To_Club_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* postit_03;
    class UStaticMeshComponent* postit_02;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_To_Club(int32 EntryPoint);
};

#endif
