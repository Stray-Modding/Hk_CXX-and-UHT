#ifndef UE4SS_SDK_LOOT_Music_Part_7_HPP
#define UE4SS_SDK_LOOT_Music_Part_7_HPP

class ALOOT_Music_Part_7_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0238 (size: 0x8)
    class UCOMP_Lootable_C* COMP_Lootable;                                            // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Music_Part;                                           // 0x0248 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0250 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_LOOT_Music_Part_7(int32 EntryPoint);
}; // Size: 0x258

#endif
