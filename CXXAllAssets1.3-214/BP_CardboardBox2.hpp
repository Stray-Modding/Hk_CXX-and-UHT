#ifndef UE4SS_SDK_BP_CardboardBox2_HPP
#define UE4SS_SDK_BP_CardboardBox2_HPP

class ABP_CardboardBox2_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Box;                                                  // 0x0230 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0238 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CardboardBox2(int32 EntryPoint);
}; // Size: 0x240

#endif
