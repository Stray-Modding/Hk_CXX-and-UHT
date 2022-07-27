#ifndef UE4SS_SDK_CACA_FollowingCameraWithRenderTarget_HPP
#define UE4SS_SDK_CACA_FollowingCameraWithRenderTarget_HPP

class ACACA_FollowingCameraWithRenderTarget_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0230 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0238 (size: 0x8)
    class UPointLightComponent* LedLight;                                             // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Security_Camera;                                      // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Security_Camera_Base;                                 // 0x0250 (size: 0x8)
    class UMeowableComponent* Meowable;                                               // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Led;                                                  // 0x0260 (size: 0x8)
    class USceneComponent* PivotCam;                                                  // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)
    bool Active;                                                                      // 0x0278 (size: 0x1)
    bool Mewoed;                                                                      // 0x0279 (size: 0x1)
    class UTextureRenderTarget2D* TargetTexture;                                      // 0x0280 (size: 0x8)
    class AActor* CamFollowTarget;                                                    // 0x0288 (size: 0x8)
    class UMaterialInterface* ledColor;                                               // 0x0290 (size: 0x8)
    FRotator previousRotation;                                                        // 0x0298 (size: 0xC)
    FRotator InitMeowRot;                                                             // 0x02A4 (size: 0xC)
    float rotation sfx gain;                                                          // 0x02B0 (size: 0x4)
    float gain mult;                                                                  // 0x02B4 (size: 0x4)

    void Complete_578069E64FB8DCA8E1905FB7293327B8();
    void Tick_578069E64FB8DCA8E1905FB7293327B8(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void ReceiveBeginPlay();
    void BndEvt__Meowable_K2Node_ComponentBoundEvent_0_NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void ExecuteUbergraph_CACA_FollowingCameraWithRenderTarget(int32 EntryPoint);
}; // Size: 0x2B8

#endif
