#ifndef UE4SS_SDK_Cac_B12_Spirit_HPP
#define UE4SS_SDK_Cac_B12_Spirit_HPP

class ACac_B12_Spirit_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float Timeline_0_NewTrack_0_E353781542EFE3320A05ABA23446D732;                     // 0x0248 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E353781542EFE3320A05ABA23446D732; // 0x024C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0250 (size: 0x8)
    class AActor* SplineActor;                                                        // 0x0258 (size: 0x8)
    float TimeToFollow;                                                               // 0x0260 (size: 0x4)
    bool DoOnce;                                                                      // 0x0264 (size: 0x1)
    bool isInverted;                                                                  // 0x0265 (size: 0x1)
    class USplineComponent* SplineToFollow;                                           // 0x0268 (size: 0x8)
    bool HasBeenStopped;                                                              // 0x0270 (size: 0x1)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void MvtSpline(bool DoOnce, float DelayBeforeStart);
    void MvtSplineinverse(bool DoOnce, float DelayBeforeStart);
    void StopAllMvt();
    void start sfx();
    void stop sfx();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Cac_B12_Spirit(int32 EntryPoint);
}; // Size: 0x271

#endif
