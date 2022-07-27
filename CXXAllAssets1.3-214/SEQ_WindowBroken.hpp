#ifndef UE4SS_SDK_SEQ_WindowBroken_HPP
#define UE4SS_SDK_SEQ_WindowBroken_HPP

class ASEQ_WindowBroken_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ADestructibleActor* Window;                                                 // 0x0270 (size: 0x8)
    bool WindowIsBroken;                                                              // 0x0278 (size: 0x1)
    class ASEQ_TriggerCameraSpline_C* CamOn;                                          // 0x0280 (size: 0x8)

    void LogicTrigger();
    void BndEvt__SEQ_WindowBroken_Window_K2Node_ComponentBoundEvent_0_ActorFractureSignature__DelegateSignature(const FVector& HitPoint, const FVector& HitDirection);
    void ExecuteUbergraph_SEQ_WindowBroken(int32 EntryPoint);
}; // Size: 0x288

#endif
