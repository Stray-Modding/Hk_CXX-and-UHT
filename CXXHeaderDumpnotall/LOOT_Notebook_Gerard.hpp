#ifndef UE4SS_SDK_LOOT_Notebook_Gerard_HPP
#define UE4SS_SDK_LOOT_Notebook_Gerard_HPP

class ALOOT_Notebook_Gerard_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* w1;
    class UStaticMeshComponent* W;
    class UStaticMeshComponent* Plane5;
    class UStaticMeshComponent* Plane4;
    class UStaticMeshComponent* Cube1;
    class UStaticMeshComponent* Cube;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class UStaticMeshComponent* Plane;
    class UStaticMeshComponent* Plane2;
    class UStaticMeshComponent* Book;
    class USaveComponent* Save;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Notebook_Gerard(int32 EntryPoint);
};

#endif
