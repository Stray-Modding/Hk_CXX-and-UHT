#ifndef UE4SS_SDK_COMP_Lootable_HPP
#define UE4SS_SDK_COMP_Lootable_HPP

class UCOMP_Lootable_C : public ULootableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TMap<class UStaticMeshComponent*, class UMaterialInterface*> BaseMaterials;

    void LootAnimationDone();
    void SetMaterials(class UMaterialInterface* Material);
    void ResetMaterials();
    void _OnDroneUseStarted(class ADrone* _drone);
    void ExecuteUbergraph_COMP_Lootable(int32 EntryPoint);
};

#endif
