#ifndef UE4SS_SDK_LOOT_Helmet_HPP
#define UE4SS_SDK_LOOT_Helmet_HPP

class ALOOT_Helmet_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_Lootable;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Helmet(int32 EntryPoint);
};

#endif
