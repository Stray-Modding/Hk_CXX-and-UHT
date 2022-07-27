#ifndef UE4SS_SDK_LOOT_Notebook_Doc_HPP
#define UE4SS_SDK_LOOT_Notebook_Doc_HPP

class ALOOT_Notebook_Doc_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class UStaticMeshComponent* Plane;
    class UStaticMeshComponent* Plane7;
    class UStaticMeshComponent* E;
    class UStaticMeshComponent* Plane6;
    class UStaticMeshComponent* Plane5;
    class UStaticMeshComponent* Plane4;
    class UStaticMeshComponent* Cube1;
    class UStaticMeshComponent* Plane1;
    class UStaticMeshComponent* Book;
    class USaveComponent* Save;
    class USceneComponent* DefaultSceneRoot;
    bool WhenLooted_First time;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Notebook_Doc(int32 EntryPoint);
};

#endif
