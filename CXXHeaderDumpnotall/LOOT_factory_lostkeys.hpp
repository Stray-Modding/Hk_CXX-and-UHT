#ifndef UE4SS_SDK_LOOT_factory_lostkeys_HPP
#define UE4SS_SDK_LOOT_factory_lostkeys_HPP

class ALOOT_factory_lostkeys_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class UStaticMeshComponent* key_set_05;
    class UStaticMeshComponent* Object123;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_factory_lostkeys(int32 EntryPoint);
};

#endif