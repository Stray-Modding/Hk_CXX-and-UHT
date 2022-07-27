#ifndef UE4SS_SDK_BP_DeadEndSlipZone_HPP
#define UE4SS_SDK_BP_DeadEndSlipZone_HPP

class ABP_DeadEndSlipZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* SlipVibration;                                             // 0x0230 (size: 0x8)
    class UAudioComponent* SlideLoop;                                                 // 0x0238 (size: 0x8)
    class USplineComponent* SlipSlopeSpline;                                          // 0x0240 (size: 0x8)
    class USplineComponent* SlipLateralSpline;                                        // 0x0248 (size: 0x8)
    class UBoxComponent* Slip;                                                        // 0x0250 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0258 (size: 0x8)
    class UBoxComponent* Start;                                                       // 0x0260 (size: 0x8)
    class USplineComponent* SlopeSpline;                                              // 0x0268 (size: 0x8)
    class USplineComponent* LateralSpline;                                            // 0x0270 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0278 (size: 0x8)
    class UCameraShakeBase* CameraShake;                                              // 0x0280 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0288 (size: 0x8)
    class UAudioComponent* Sound;                                                     // 0x0290 (size: 0x8)
    bool IsSliding;                                                                   // 0x0298 (size: 0x1)
    class UParticleSystemComponent* FX_WaterTrail;                                    // 0x02A0 (size: 0x8)
    float Synchronization Time;                                                       // 0x02A8 (size: 0x4)

    void GetAnimationRatio(float& Ratio);
    void Complete_6246EF4646E19036986D72BA4CD7CA74();
    void Tick_6246EF4646E19036986D72BA4CD7CA74(float Ratio);
    void BndEvt__BP_SlipZone_Start_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Start_CameraShake(float Scale);
    void Stop_CameraShake();
    void BndEvt__BP_SlipZone_Remi_Slip_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void DoSlip(class USplineComponent* LateralSpline, class USplineComponent* SlopeSpline, class UAnimSequence* Animation, class ABP_CatPawn_C* cat, float SynchronizationTime);
    void BndEvt__BP_DeadEndSlipZone_Streaming_K2Node_ComponentBoundEvent_3_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void FX Spawn(float _delay);
    void Start Vibration();
    void Update Vibration();
    void Stop Vibration();
    void ExecuteUbergraph_BP_DeadEndSlipZone(int32 EntryPoint);
}; // Size: 0x2AC

#endif
