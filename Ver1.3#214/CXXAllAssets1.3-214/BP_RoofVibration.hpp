#ifndef UE4SS_SDK_BP_RoofVibration_HPP
#define UE4SS_SDK_BP_RoofVibration_HPP

class ABP_RoofVibration_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* ImpactVibration;                                           // 0x0230 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0238 (size: 0x8)
    class UAudioComponent* RoofVibration;                                             // 0x0240 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    float vibrationDistanceStart;                                                     // 0x0258 (size: 0x4)
    class ABP_CatPawn_C* cat;                                                         // 0x0260 (size: 0x8)
    class ABP_City_Door_C* CityDoor;                                                  // 0x0268 (size: 0x8)
    float VibrationLevelCurrent;                                                      // 0x0270 (size: 0x4)
    float VibrationLevelTarget;                                                       // 0x0274 (size: 0x4)
    float Delta Seconds;                                                              // 0x0278 (size: 0x4)

    void Complete_6246EF4646E19036986D72BA5AD3C420();
    void Tick_6246EF4646E19036986D72BA5AD3C420(float Ratio);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StartImpactVibration();
    void StartVibration();
    void BndEvt__BP_RoofVibration_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_RoofVibration(int32 EntryPoint);
}; // Size: 0x27C

#endif
