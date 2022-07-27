#ifndef UE4SS_SDK_LOOT_Fixed_Tracker_HPP
#define UE4SS_SDK_LOOT_Fixed_Tracker_HPP

class ALOOT_Fixed_Tracker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* Scene;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class UAudioComponent* noise loop;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Fixed_Tracker(int32 EntryPoint);
};

#endif
