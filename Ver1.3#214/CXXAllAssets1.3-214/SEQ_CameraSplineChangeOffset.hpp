#ifndef UE4SS_SDK_SEQ_CameraSplineChangeOffset_HPP
#define UE4SS_SDK_SEQ_CameraSplineChangeOffset_HPP

class ASEQ_CameraSplineChangeOffset_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Activate;                                                                    // 0x0270 (size: 0x1)
    class ABP_SplineCamera_C* cameraSpline;                                           // 0x0278 (size: 0x8)
    FVector Offset_1;                                                                 // 0x0280 (size: 0xC)
    FVector Offset_2;                                                                 // 0x028C (size: 0xC)

    void ReceiveTick(float DeltaSeconds);
    void OnStartSequence();
    void ReceiveBeginPlay();
    void LogicTrigger();
    void ExecuteUbergraph_SEQ_CameraSplineChangeOffset(int32 EntryPoint);
}; // Size: 0x298

#endif
