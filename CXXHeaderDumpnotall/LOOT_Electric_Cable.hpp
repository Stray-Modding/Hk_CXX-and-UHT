#ifndef UE4SS_SDK_LOOT_Electric_Cable_HPP
#define UE4SS_SDK_LOOT_Electric_Cable_HPP

class ALOOT_Electric_Cable_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Electric_Cable(int32 EntryPoint);
};

#endif
