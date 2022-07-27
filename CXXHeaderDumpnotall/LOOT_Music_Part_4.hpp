#ifndef UE4SS_SDK_LOOT_Music_Part_4_HPP
#define UE4SS_SDK_LOOT_Music_Part_4_HPP

class ALOOT_Music_Part_4_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UArrowComponent* Arrow;
    class UCOMP_Lootable_C* COMP_Lootable;
    class UStaticMeshComponent* Music_Part;
    class USceneComponent* Scene;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_LOOT_Music_Part_4(int32 EntryPoint);
};

#endif
