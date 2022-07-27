#ifndef UE4SS_SDK_BP_noisy_rusty_plate_HPP
#define UE4SS_SDK_BP_noisy_rusty_plate_HPP

class ABP_noisy_rusty_plate_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* plate_mesh;                                           // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    int32 Type;                                                                       // 0x0240 (size: 0x4)
    int32 numberOverlapping;                                                          // 0x0244 (size: 0x4)
    float delay time;                                                                 // 0x0248 (size: 0x4)

    void footstep(float Velocity);
    void ExecuteUbergraph_BP_noisy_rusty_plate(int32 EntryPoint);
}; // Size: 0x24C

#endif
