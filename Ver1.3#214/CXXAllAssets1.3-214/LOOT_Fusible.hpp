#ifndef UE4SS_SDK_LOOT_Fusible_HPP
#define UE4SS_SDK_LOOT_Fusible_HPP

class ALOOT_Fusible_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_Lootable_C* COMP_LootableComponent;                                   // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_LOOT_Fusible(int32 EntryPoint);
}; // Size: 0x248

#endif
