#ifndef UE4SS_SDK_LOOT_Clementine_Adress_HPP
#define UE4SS_SDK_LOOT_Clementine_Adress_HPP

class ALOOT_Clementine_Adress_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Plane1;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class USceneComponent* DefaultSceneRoot;
    int32 Nmb_Vertical;
    int32 Nmb_Horizontal;
    float Random_0_1;
    FRandomStream Random_Stream;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Clementine_Adress(int32 EntryPoint);
};

#endif
