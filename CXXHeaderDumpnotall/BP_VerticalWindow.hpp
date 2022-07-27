#ifndef UE4SS_SDK_BP_VerticalWindow_HPP
#define UE4SS_SDK_BP_VerticalWindow_HPP

class ABP_VerticalWindow_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cube;
    class UStaticMeshComponent* W_180x90_01_Open;
    class UStaticMeshComponent* Interruptor;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_VerticalWindow(int32 EntryPoint);
};

#endif
