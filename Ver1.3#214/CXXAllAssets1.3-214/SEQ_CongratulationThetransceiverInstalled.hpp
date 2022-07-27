#ifndef UE4SS_SDK_SEQ_CongratulationThetransceiverInstalled_HPP
#define UE4SS_SDK_SEQ_CongratulationThetransceiverInstalled_HPP

class ASEQ_CongratulationThetransceiverInstalled_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Activate;                                                                    // 0x0270 (size: 0x1)
    class ADial_B12_CongratulationTheTransceiverInstalled_C* B12 Dial;                // 0x0278 (size: 0x8)
    TArray<class ABP_Light_NeonLarge_Child_RealTime_C*> Light;                        // 0x0280 (size: 0x10)
    int32 LightIndex;                                                                 // 0x0290 (size: 0x4)
    class ABP_OrientCameraThirdPersonZone_C* CameraOrient;                            // 0x0298 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Plan Camera;                                 // 0x02A0 (size: 0x8)
    class AActor* Target_Camera;                                                      // 0x02A8 (size: 0x8)
    class AActor* target_StartPos;                                                    // 0x02B0 (size: 0x8)
    class AActor* target_EndPos;                                                      // 0x02B8 (size: 0x8)
    class ABP_Dialog_Zone_C* DialZoneMM2;                                             // 0x02C0 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Plan Camera CatMove;                         // 0x02C8 (size: 0x8)
    class AActor* CatMoveTarget_POS;                                                  // 0x02D0 (size: 0x8)
    class AActor* TP_Cat_POS;                                                         // 0x02D8 (size: 0x8)

    void Complete_6246EF4646E19036986D72BAC018BB73();
    void Tick_6246EF4646E19036986D72BAC018BB73(float Ratio);
    void Complete_6246EF4646E19036986D72BA8B691B83();
    void Tick_6246EF4646E19036986D72BA8B691B83(float Ratio);
    void ReceiveBeginPlay();
    void LogicTrigger();
    void OnStartSequence();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SEQ_CongratulationThetransceiverInstalled(int32 EntryPoint);
}; // Size: 0x2E0

#endif
