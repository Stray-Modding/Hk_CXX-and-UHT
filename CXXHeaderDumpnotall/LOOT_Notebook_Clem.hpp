#ifndef UE4SS_SDK_LOOT_Notebook_Clem_HPP
#define UE4SS_SDK_LOOT_Notebook_Clem_HPP

class ALOOT_Notebook_Clem_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class UStaticMeshComponent* Plane;
    class UStaticMeshComponent* Plane7;
    class UStaticMeshComponent* Plane6;
    class UStaticMeshComponent* Plane3;
    class UStaticMeshComponent* Plane2;
    class UStaticMeshComponent* Cube1;
    class UStaticMeshComponent* Cube;
    class UStaticMeshComponent* Plane1;
    class UStaticMeshComponent* Book;
    class USaveComponent* Save;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Notebook_Clem(int32 EntryPoint);
};

#endif
