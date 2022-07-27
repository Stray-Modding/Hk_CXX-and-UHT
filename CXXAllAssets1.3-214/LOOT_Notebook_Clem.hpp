#ifndef UE4SS_SDK_LOOT_Notebook_Clem_HPP
#define UE4SS_SDK_LOOT_Notebook_Clem_HPP

class ALOOT_Notebook_Clem_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_Lootable_C* COMP_LootableComponent;                                   // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Plane7;                                               // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Plane6;                                               // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Plane3;                                               // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Plane2;                                               // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Book;                                                 // 0x0278 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Notebook_Clem(int32 EntryPoint);
}; // Size: 0x290

#endif
