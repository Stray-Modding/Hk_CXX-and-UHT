#ifndef UE4SS_SDK_LOOT_Music_Part_3_HPP
#define UE4SS_SDK_LOOT_Music_Part_3_HPP

class ALOOT_Music_Part_3_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USaveComponent* Save;
    class UCOMP_Lootable_C* COMP_Lootable;
    class UArrowComponent* Arrow;
    class UStaticMeshComponent* Music_Part;
    class USceneComponent* Scene;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_LOOT_Music_Part_3(int32 EntryPoint);
};

#endif
