#ifndef UE4SS_SDK_LOOT_Clementine_Adress_HPP
#define UE4SS_SDK_LOOT_Clementine_Adress_HPP

class ALOOT_Clementine_Adress_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UCOMP_Lootable_C* COMP_LootableComponent;                                   // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    int32 Nmb_Vertical;                                                               // 0x0250 (size: 0x4)
    int32 Nmb_Horizontal;                                                             // 0x0254 (size: 0x4)
    float Random_0_1;                                                                 // 0x0258 (size: 0x4)
    FRandomStream Random_Stream;                                                      // 0x025C (size: 0x8)

    void BndEvt__COMP_LootableComponent_K2Node_ComponentBoundEvent_0_LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void ExecuteUbergraph_LOOT_Clementine_Adress(int32 EntryPoint);
}; // Size: 0x264

#endif
