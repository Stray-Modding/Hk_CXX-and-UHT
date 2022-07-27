#ifndef UE4SS_SDK_BP_cracking_wood_plank_b_HPP
#define UE4SS_SDK_BP_cracking_wood_plank_b_HPP

class ABP_cracking_wood_plank_b_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Wood_Plank_b;                                         // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    void footstep(float Velocity);
    void ExecuteUbergraph_BP_cracking_wood_plank_b(int32 EntryPoint);
}; // Size: 0x240

#endif
