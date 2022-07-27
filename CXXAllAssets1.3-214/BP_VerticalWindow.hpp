#ifndef UE4SS_SDK_BP_VerticalWindow_HPP
#define UE4SS_SDK_BP_VerticalWindow_HPP

class ABP_VerticalWindow_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0380 (size: 0x8)
    class UStaticMeshComponent* W_180x90_01_Open;                                     // 0x0388 (size: 0x8)
    class UStaticMeshComponent* Interruptor;                                          // 0x0390 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_VerticalWindow(int32 EntryPoint);
}; // Size: 0x398

#endif
