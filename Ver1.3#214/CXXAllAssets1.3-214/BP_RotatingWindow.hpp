#ifndef UE4SS_SDK_BP_RotatingWindow_HPP
#define UE4SS_SDK_BP_RotatingWindow_HPP

class ABP_RotatingWindow_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RotatingWindow(int32 EntryPoint);
}; // Size: 0x388

#endif
