#ifndef UE4SS_SDK_Seq_Cinemode_HPP
#define UE4SS_SDK_Seq_Cinemode_HPP

class ASeq_Cinemode_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0270 (size: 0x8)
    class ASEQ_TriggerCameraSpline_C* Trigger_CameraSpline;                           // 0x0278 (size: 0x8)
    float Blend Time In;                                                              // 0x0280 (size: 0x4)
    float AngleToleranceToCutCam;                                                     // 0x0284 (size: 0x4)

    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Seq_Cinemode(int32 EntryPoint);
}; // Size: 0x288

#endif
