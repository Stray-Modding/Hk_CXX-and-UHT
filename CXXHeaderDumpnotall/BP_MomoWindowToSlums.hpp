#ifndef UE4SS_SDK_BP_MomoWindowToSlums_HPP
#define UE4SS_SDK_BP_MomoWindowToSlums_HPP

class ABP_MomoWindowToSlums_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh5;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MomoWindowToSlums(int32 EntryPoint);
};

#endif
