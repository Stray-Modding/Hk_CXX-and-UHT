#ifndef UE4SS_SDK_Seq_Sign_Chapeloop_HPP
#define UE4SS_SDK_Seq_Sign_Chapeloop_HPP

class ASeq_Sign_Chapeloop_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UMeowableComponent* Meowable;                                               // 0x0278 (size: 0x8)
    class ABP_Sign_Chapeloop_H_C* Sign_H;                                             // 0x0280 (size: 0x8)
    class ABP_Sign_Chapeloop_E_C* Sign_E;                                             // 0x0288 (size: 0x8)
    class ABP_Sign_Chapeloop_L_C* Sign_L;                                             // 0x0290 (size: 0x8)
    class ABP_Sign_Chapeloop_P_C* Sign_P;                                             // 0x0298 (size: 0x8)
    class ABP_Sign_Chapeloop_Arrow_C* Sign_Arrow_0;                                   // 0x02A0 (size: 0x8)
    class ABP_Sign_Chapeloop_Arrow_C* Sign_Arrow_1;                                   // 0x02A8 (size: 0x8)
    class ABP_OrientCameraThirdPersonZone_C* CamOrient;                               // 0x02B0 (size: 0x8)
    bool NeonOn;                                                                      // 0x02B8 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x02C0 (size: 0x8)
    class UMaterialInstanceDynamic* Mat Neon;                                         // 0x02C8 (size: 0x8)
    FLinearColor Neon Color;                                                          // 0x02D0 (size: 0x10)
    float Neon Intensity;                                                             // 0x02E0 (size: 0x4)
    bool flashed;                                                                     // 0x02E4 (size: 0x1)
    bool Finished;                                                                    // 0x02E5 (size: 0x1)
    FName Actor Id;                                                                   // 0x02E8 (size: 0x8)

    void LogicTrigger();
    void BndEvt__Seq_Sign_Chapeloop_Meowable_K2Node_ComponentBoundEvent_1_NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void Flash(float mul);
    void BndEvt__Seq_Sign_Chapeloop_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Seq_Sign_Chapeloop(int32 EntryPoint);
}; // Size: 0x2F0

#endif
