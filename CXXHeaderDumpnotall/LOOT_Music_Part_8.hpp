#ifndef UE4SS_SDK_LOOT_Music_Part_8_HPP
#define UE4SS_SDK_LOOT_Music_Part_8_HPP

class ALOOT_Music_Part_8_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UArrowComponent* Arrow;
    class UCOMP_Lootable_C* COMP_Lootable;
    class UStaticMeshComponent* Music_Part;
    class USceneComponent* Scene;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_LOOT_Music_Part_8(int32 EntryPoint);
};

#endif
