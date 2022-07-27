#ifndef UE4SS_SDK_LOOT_To_Club_HPP
#define UE4SS_SDK_LOOT_To_Club_HPP

class ALOOT_To_Club_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* postit_03;                                            // 0x0230 (size: 0x8)
    class UStaticMeshComponent* postit_02;                                            // 0x0238 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0240 (size: 0x8)
    class UCOMP_Lootable_C* COMP_LootableComponent;                                   // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_To_Club(int32 EntryPoint);
}; // Size: 0x258

#endif
