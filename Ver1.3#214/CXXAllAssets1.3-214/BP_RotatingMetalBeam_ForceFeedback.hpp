#ifndef UE4SS_SDK_BP_RotatingMetalBeam_ForceFeedback_HPP
#define UE4SS_SDK_BP_RotatingMetalBeam_ForceFeedback_HPP

class ABP_RotatingMetalBeam_ForceFeedback_C : public ABP_RotatingMetalBeam_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Max_Blocker;                                          // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Min_Blocker;                                          // 0x02C8 (size: 0x8)
    float ForcefeedbackAngleSpeed;                                                    // 0x02D0 (size: 0x4)
    float TimeToReachFeedbackAngleSpeed;                                              // 0x02D4 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Init Beam();
    void ExecuteUbergraph_BP_RotatingMetalBeam_ForceFeedback(int32 EntryPoint);
}; // Size: 0x2D8

#endif
