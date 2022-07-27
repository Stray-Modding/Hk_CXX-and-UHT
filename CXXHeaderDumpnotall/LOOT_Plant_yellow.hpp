#ifndef UE4SS_SDK_LOOT_Plant_yellow_HPP
#define UE4SS_SDK_LOOT_Plant_yellow_HPP

class ALOOT_Plant_yellow_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__LOOT_Plant_yellow_COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Plant_yellow(int32 EntryPoint);
};

#endif
