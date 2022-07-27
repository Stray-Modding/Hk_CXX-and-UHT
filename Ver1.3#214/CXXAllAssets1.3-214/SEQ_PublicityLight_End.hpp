#ifndef UE4SS_SDK_SEQ_PublicityLight_End_HPP
#define UE4SS_SDK_SEQ_PublicityLight_End_HPP

class ASEQ_PublicityLight_End_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool LightOn;                                                                     // 0x0270 (size: 0x1)
    class ABP_Sign_FollowLight_C* ActivateSignLight;                                  // 0x0278 (size: 0x8)
    class ABP_OrientCameraThirdPersonZone_C* Camera Orient;                           // 0x0280 (size: 0x8)
    class ACACA_FollowingCameraWithRenderTarget_C* Camera;                            // 0x0288 (size: 0x8)
    class ASeq_CatLookAt_C* Seq_LookAt;                                               // 0x0290 (size: 0x8)
    class AActor* LookAtTarget;                                                       // 0x0298 (size: 0x8)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SEQ_PublicityLight_End(int32 EntryPoint);
}; // Size: 0x2A0

#endif
