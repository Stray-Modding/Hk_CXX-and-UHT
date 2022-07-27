#ifndef UE4SS_SDK_LOOT_Keys_B12Flat_HPP
#define UE4SS_SDK_LOOT_Keys_B12Flat_HPP

class ALOOT_Keys_B12Flat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Electric_stuff_05;
    class UStaticMeshComponent* key_set_07;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* Object123;
    class UStaticMeshComponent* key_set_06;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class UStaticMeshComponent* key_set_05;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Keys_B12Flat(int32 EntryPoint);
};

#endif
