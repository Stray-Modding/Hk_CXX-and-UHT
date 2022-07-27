#ifndef UE4SS_SDK_LOOT_Fixed_Tracker_HPP
#define UE4SS_SDK_LOOT_Fixed_Tracker_HPP

class ALOOT_Fixed_Tracker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0240 (size: 0x8)
    class UCOMP_Lootable_C* COMP_LootableComponent;                                   // 0x0248 (size: 0x8)
    class UAudioComponent* noise loop;                                                // 0x0250 (size: 0x8)

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Fixed_Tracker(int32 EntryPoint);
}; // Size: 0x258

#endif
