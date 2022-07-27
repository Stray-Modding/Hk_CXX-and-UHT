#ifndef UE4SS_SDK_BP_SecurityCam_Midtown_HPP
#define UE4SS_SDK_BP_SecurityCam_Midtown_HPP

class ABP_SecurityCam_Midtown_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Led;                                                  // 0x0230 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0238 (size: 0x8)
    class USceneComponent* PivotCam;                                                  // 0x0240 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0248 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0250 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0258 (size: 0x8)
    class UPointLightComponent* LedLight;                                             // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Security_Camera;                                      // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Security_Camera_Base;                                 // 0x0270 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0278 (size: 0x8)
    class AActor* Target;                                                             // 0x0280 (size: 0x8)
    bool Active;                                                                      // 0x0288 (size: 0x1)
    class UMaterialInterface* LEDColor;                                               // 0x0290 (size: 0x8)
    FRotator previousRotation;                                                        // 0x0298 (size: 0xC)
    float rotating sfx gain;                                                          // 0x02A4 (size: 0x4)
    TArray<class UStaticMeshComponent*> ComponentToBreak;                             // 0x02A8 (size: 0x10)
    FBP_SecurityCam_Midtown_CIsFollowing IsFollowing;                                 // 0x02B8 (size: 0x10)
    void IsFollowing();

    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void BndEvt__BP_FollowingCamera_Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BreakCamera();
    void ExecuteUbergraph_BP_SecurityCam_Midtown(int32 EntryPoint);
    void IsFollowing__DelegateSignature();
}; // Size: 0x2C8

#endif
