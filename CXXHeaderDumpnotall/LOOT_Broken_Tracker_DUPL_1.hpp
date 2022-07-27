#ifndef UE4SS_SDK_LOOT_Broken_Tracker_DUPL_1_HPP
#define UE4SS_SDK_LOOT_Broken_Tracker_DUPL_1_HPP

class ALOOT_Broken_Tracker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStreamingComponent* Streaming;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* Collider;
    class USaveComponent* Save;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Broken_Tracker(int32 EntryPoint);
};

#endif
