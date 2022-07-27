#ifndef UE4SS_SDK_Seq_Flat_Cam_HPP
#define UE4SS_SDK_Seq_Flat_Cam_HPP

class ASeq_Flat_Cam_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_CameraZone_C* BP_CameraZone;                                            // 0x0270 (size: 0x8)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Seq_Flat_Cam(int32 EntryPoint);
}; // Size: 0x278

#endif
