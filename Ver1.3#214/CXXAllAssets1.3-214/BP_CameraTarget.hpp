#ifndef UE4SS_SDK_BP_CameraTarget_HPP
#define UE4SS_SDK_BP_CameraTarget_HPP

class ABP_CameraTarget_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0230 (size: 0x8)
    class UCOMP_CameraTarget_C* COMP_CameraTarget;                                    // 0x0238 (size: 0x8)

    void ReceiveBeginPlay();
    void LogicTrigger();
    void ExecuteUbergraph_BP_CameraTarget(int32 EntryPoint);
}; // Size: 0x240

#endif
