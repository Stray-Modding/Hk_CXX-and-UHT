#ifndef UE4SS_SDK_BP_SpawnProps_cineintro_HPP
#define UE4SS_SDK_BP_SpawnProps_cineintro_HPP

class ABP_SpawnProps_cineintro_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    void ReceiveBeginPlay();
    void SpawnProps();
    void ExecuteUbergraph_BP_SpawnProps_cineintro(int32 EntryPoint);
}; // Size: 0x240

#endif
