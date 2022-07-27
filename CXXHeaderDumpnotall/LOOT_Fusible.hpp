#ifndef UE4SS_SDK_LOOT_Fusible_HPP
#define UE4SS_SDK_LOOT_Fusible_HPP

class ALOOT_Fusible_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCOMP_Lootable_C* COMP_LootableComponent;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_LOOT_Fusible(int32 EntryPoint);
};

#endif
