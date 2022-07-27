#ifndef UE4SS_SDK_LOOT_Rikonium_HPP
#define UE4SS_SDK_LOOT_Rikonium_HPP

class ALOOT_Rikonium_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    TArray<class AActor*> ActorToTriggerOnLoot;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Rikonium(int32 EntryPoint);
};

#endif
