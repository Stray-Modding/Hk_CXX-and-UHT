#ifndef UE4SS_SDK_BP_CameraZone_HPP
#define UE4SS_SDK_BP_CameraZone_HPP

class ABP_CameraZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class AActor* Main_Camera;                                                        // 0x0248 (size: 0x8)
    class AActor* Inverse_Camera;                                                     // 0x0250 (size: 0x8)
    int32 OverlapCount;                                                               // 0x0258 (size: 0x4)
    float BlendTimeIn;                                                                // 0x025C (size: 0x4)
    float BlendTimeOut;                                                               // 0x0260 (size: 0x4)
    bool Actif;                                                                       // 0x0264 (size: 0x1)
    bool KeepPreviousInput;                                                           // 0x0265 (size: 0x1)
    EInputTransitionMode Input Transition Mode Push;                                  // 0x0266 (size: 0x1)
    EInputTransitionMode Input Transition Mode Pop;                                   // 0x0267 (size: 0x1)
    bool TriggerOrientation;                                                          // 0x0268 (size: 0x1)
    float TriggerOrientationAngle;                                                    // 0x026C (size: 0x4)
    bool CatInZone;                                                                   // 0x0270 (size: 0x1)
    class AActor* CurrentCamera;                                                      // 0x0278 (size: 0x8)
    bool CameraPushed;                                                                // 0x0280 (size: 0x1)

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void PushCamera();
    void Pop Camera();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_CameraZone(int32 EntryPoint);
}; // Size: 0x281

#endif
