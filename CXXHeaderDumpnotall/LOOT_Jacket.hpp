#ifndef UE4SS_SDK_LOOT_Jacket_HPP
#define UE4SS_SDK_LOOT_Jacket_HPP

class ALOOT_Jacket_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class USaveComponent* Save;
    class UStaticMeshComponent* Vest_SM;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Jacket(int32 EntryPoint);
};

#endif
