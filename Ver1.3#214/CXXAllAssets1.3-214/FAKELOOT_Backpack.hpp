#ifndef UE4SS_SDK_FAKELOOT_Backpack_HPP
#define UE4SS_SDK_FAKELOOT_Backpack_HPP

class AFAKELOOT_Backpack_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_Lootable_C* COMP_LootableComponent;                                   // 0x0230 (size: 0x8)
    class UStaticMeshComponent* key_set_05;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_FAKELOOT_Backpack(int32 EntryPoint);
}; // Size: 0x248

#endif
