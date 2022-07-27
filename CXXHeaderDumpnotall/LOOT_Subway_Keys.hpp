#ifndef UE4SS_SDK_LOOT_Subway_Keys_HPP
#define UE4SS_SDK_LOOT_Subway_Keys_HPP

class ALOOT_Subway_Keys_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* E;
    class USceneComponent* Scene;
    class UStaticMeshComponent* Cube;
    class UStaticMeshComponent* Key;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class UStaticMeshComponent* key_set_05;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Subway_Keys(int32 EntryPoint);
};

#endif
