#ifndef UE4SS_SDK_SEQ_ExitCameraSplineManager_HPP
#define UE4SS_SDK_SEQ_ExitCameraSplineManager_HPP

class ASEQ_ExitCameraSplineManager_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UBoxComponent* ExitZone;                                                    // 0x0278 (size: 0x8)
    class UBoxComponent* InteriorZone;                                                // 0x0280 (size: 0x8)
    class ABP_SplineCamera_C* cameraSpline;                                           // 0x0288 (size: 0x8)
    class ASEQ_TriggerCameraSpline_C* SEQ_cameraSpline_Trigger;                       // 0x0290 (size: 0x8)

    void LogicTrigger();
    void BndEvt__SEQ_ExitCameraSplineManager_InteriorZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SEQ_ExitCameraSplineManager_ExitZone_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_SEQ_ExitCameraSplineManager(int32 EntryPoint);
}; // Size: 0x298

#endif
