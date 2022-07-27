#ifndef UE4SS_SDK_BP_FollowingCamera_HPP
#define UE4SS_SDK_BP_FollowingCamera_HPP

class ABP_FollowingCamera_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Security_Camera;                                      // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Security_Camera_Base;                                 // 0x0250 (size: 0x8)
    class UMeowableComponent* Meowable;                                               // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Led;                                                  // 0x0260 (size: 0x8)
    class USceneComponent* PivotCam;                                                  // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)
    bool Active;                                                                      // 0x0278 (size: 0x1)
    bool Mewoed;                                                                      // 0x0279 (size: 0x1)
    class AActor* CamFollowTarget;                                                    // 0x0280 (size: 0x8)
    class UMaterialInterface* CamFollow_ledColor;                                     // 0x0288 (size: 0x8)
    FRotator previousRotation;                                                        // 0x0290 (size: 0xC)
    FRotator InitMeowRot;                                                             // 0x029C (size: 0xC)
    float rotating sfx gain;                                                          // 0x02A8 (size: 0x4)
    float delayBeforeActivate;                                                        // 0x02AC (size: 0x4)

    void Complete_578069E64FB8DCA8E1905FB7BD4A2940();
    void Tick_578069E64FB8DCA8E1905FB7BD4A2940(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void BndEvt__Meowable_K2Node_ComponentBoundEvent_0_NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void BndEvt__BP_FollowingCamera_Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Deactivate();
    void Activate();
    void DeactivateWithNoSound();
    void Follow Target();
    void ExecuteUbergraph_BP_FollowingCamera(int32 EntryPoint);
}; // Size: 0x2B0

#endif
