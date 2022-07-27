#ifndef UE4SS_SDK_BP_MovementScripter_HPP
#define UE4SS_SDK_BP_MovementScripter_HPP

class ABP_MovementScripter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0230 (size: 0x8)
    TArray<FMovementScript> Movements;                                                // 0x0238 (size: 0x10)
    int32 CurrentMovement;                                                            // 0x0248 (size: 0x4)
    FTransform StartTransform;                                                        // 0x0250 (size: 0x30)
    FBP_MovementScripter_CMovementDone MovementDone;                                  // 0x0280 (size: 0x10)
    void MovementDone(class ABP_MovementScripter_C* MovementScripter);
    float StartDistanceAlongSpline;                                                   // 0x0290 (size: 0x4)
    class USplineComponent* Spline;                                                   // 0x0298 (size: 0x8)
    FTransform StartSplineOffset;                                                     // 0x02A0 (size: 0x30)

    void Complete_6246EF4646E19036986D72BA0710520D();
    void Tick_6246EF4646E19036986D72BA0710520D(float Ratio);
    void Complete_6246EF4646E19036986D72BAA1FE3526();
    void Tick_6246EF4646E19036986D72BAA1FE3526(float Ratio);
    void StartMovement(int32 MovementIndex);
    void StopCurrentMovement();
    void OnMovementComplete();
    void ExecuteUbergraph_BP_MovementScripter(int32 EntryPoint);
    void MovementDone__DelegateSignature(class ABP_MovementScripter_C* MovementScripter);
}; // Size: 0x2D0

#endif
