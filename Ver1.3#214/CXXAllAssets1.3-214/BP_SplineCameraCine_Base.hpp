#ifndef UE4SS_SDK_BP_SplineCameraCine_Base_HPP
#define UE4SS_SDK_BP_SplineCameraCine_Base_HPP

class ABP_SplineCameraCine_Base_C : public AHKCamera
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0240 (size: 0x8)
    class USceneComponent* CameraScene;                                               // 0x0248 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0250 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0258 (size: 0x8)
    float DebugTime;                                                                  // 0x0260 (size: 0x4)
    bool Activate;                                                                    // 0x0264 (size: 0x1)
    TEnumAsByte<EEasingFunction> Easing Movement;                                     // 0x0265 (size: 0x1)
    float MovementDuration;                                                           // 0x0268 (size: 0x4)
    float WaitDurationBeforeMove;                                                     // 0x026C (size: 0x4)
    float WaitDurationAfterMove;                                                      // 0x0270 (size: 0x4)
    TEnumAsByte<CameraRotationMode> RotationMode;                                     // 0x0274 (size: 0x1)
    float Timer;                                                                      // 0x0278 (size: 0x4)
    float CatDistanceOnSpline;                                                        // 0x027C (size: 0x4)
    FRotator CameraWantedRotator;                                                     // 0x0280 (size: 0xC)
    float CameraBlendRotationSpeed;                                                   // 0x028C (size: 0x4)
    class AActor* targetToLookAt;                                                     // 0x0290 (size: 0x8)
    FVector LookAtOffset;                                                             // 0x0298 (size: 0xC)
    FRotator InitRotator;                                                             // 0x02A4 (size: 0xC)
    class UCameraShakeBase* CameraShake;                                              // 0x02B0 (size: 0x8)
    TSubclassOf<class UMatineeCameraShake> Shake Class;                               // 0x02B8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Init();
    void StartShake(float Scale);
    void StopShake();
    void ExecuteUbergraph_BP_SplineCameraCine_Base(int32 EntryPoint);
}; // Size: 0x2C0

#endif
