#ifndef UE4SS_SDK_BP_pearlcurtain1_HPP
#define UE4SS_SDK_BP_pearlcurtain1_HPP

class ABP_pearlcurtain1_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0230 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0238 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_pearlcurtain1(int32 EntryPoint);
}; // Size: 0x240

#endif
