#ifndef UE4SS_SDK_LOOT_Eliott_Poncho_HPP
#define UE4SS_SDK_LOOT_Eliott_Poncho_HPP

class ALOOT_Eliott_Poncho_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Clothset01_06;
    class UStaticMeshComponent* Clothset01_05;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Eliott_Poncho(int32 EntryPoint);
};

#endif
