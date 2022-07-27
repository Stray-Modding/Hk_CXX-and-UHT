#ifndef UE4SS_SDK_BP_CameraTarget_HPP
#define UE4SS_SDK_BP_CameraTarget_HPP

class ABP_CameraTarget_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cube;
    class UCOMP_CameraTarget_C* COMP_CameraTarget;

    void ReceiveBeginPlay();
    void LogicTrigger();
    void ExecuteUbergraph_BP_CameraTarget(int32 EntryPoint);
};

#endif
