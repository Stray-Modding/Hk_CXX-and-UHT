#ifndef UE4SS_SDK_BP_LaserBeam_Translate_HPP
#define UE4SS_SDK_BP_LaserBeam_Translate_HPP

class ABP_LaserBeam_Translate_C : public ABP_LaserBeam_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper mecanism;                           // 0x0390 (size: 0x8)
    float Timeline_0_Ratio_1994AD3A4D0E1AF29A56EDAD0DFCB781;                          // 0x0398 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1994AD3A4D0E1AF29A56EDAD0DFCB781; // 0x039C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03A0 (size: 0x8)
    float Speed;                                                                      // 0x03A8 (size: 0x4)
    FVector InitPos;                                                                  // 0x03AC (size: 0xC)
    FVector EndPos;                                                                   // 0x03B8 (size: 0xC)
    float previousRatio;                                                              // 0x03C4 (size: 0x4)
    FVector SpeedVelocity;                                                            // 0x03C8 (size: 0xC)
    float currentSpeed;                                                               // 0x03D4 (size: 0x4)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void LogicTrigger();
    void Disable();
    void Stop();
    void Play();
    void UpdateFX();
    void ReceiveBeginPlay();
    void Update Gears();
    void ExecuteUbergraph_BP_LaserBeam_Translate(int32 EntryPoint);
}; // Size: 0x3D8

#endif
