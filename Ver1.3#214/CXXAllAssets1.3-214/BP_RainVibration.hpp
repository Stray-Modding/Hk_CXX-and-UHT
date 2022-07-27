#ifndef UE4SS_SDK_BP_RainVibration_HPP
#define UE4SS_SDK_BP_RainVibration_HPP

class ABP_RainVibration_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* rainVibration;                                             // 0x0230 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float rainDistanceStart;                                                          // 0x0248 (size: 0x4)
    class ABP_CatPawn_C* cat;                                                         // 0x0250 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_RainVibration(int32 EntryPoint);
}; // Size: 0x258

#endif
