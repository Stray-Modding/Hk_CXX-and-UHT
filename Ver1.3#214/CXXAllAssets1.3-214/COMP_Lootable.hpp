#ifndef UE4SS_SDK_COMP_Lootable_HPP
#define UE4SS_SDK_COMP_Lootable_HPP

class UCOMP_Lootable_C : public ULootableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F0 (size: 0x8)
    TMap<class UStaticMeshComponent*, class UMaterialInterface*> BaseMaterials;       // 0x05F8 (size: 0x50)

    void LootAnimationDone();
    void SetMaterials(class UMaterialInterface* Material);
    void ResetMaterials();
    void _OnDroneUseStarted(class ADrone* _drone);
    void ExecuteUbergraph_COMP_Lootable(int32 EntryPoint);
}; // Size: 0x648

#endif
