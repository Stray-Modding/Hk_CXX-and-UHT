#ifndef UE4SS_SDK_ABP_Sentinel_HPP
#define UE4SS_SDK_ABP_Sentinel_HPP

class UABP_Sentinel_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0370 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03C0 (size: 0x28)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                      // 0x03E8 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x04D0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0500 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0580 (size: 0x30)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_1;      // 0x05B0 (size: 0x190)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x0740 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0828 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0858 (size: 0xB0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0908 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0A60 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0A88 (size: 0xA0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0B28 (size: 0xE8)
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;        // 0x0C10 (size: 0x190)
    float FrontVelocity;                                                              // 0x0DA0 (size: 0x4)
    float LateralVelocity;                                                            // 0x0DA4 (size: 0x4)
    TEnumAsByte<ENUM_SentinelAI_State> CurrentAiStatus;                               // 0x0DA8 (size: 0x1)
    bool bIsSeeingTarget;                                                             // 0x0DA9 (size: 0x1)
    class ABP_SentinelAI_C* BP_SentinelPawn;                                          // 0x0DB0 (size: 0x8)
    FVector LastFramePawnLocation;                                                    // 0x0DB8 (size: 0xC)
    FVector DeltaFrameLocation;                                                       // 0x0DC4 (size: 0xC)
    bool IsActive;                                                                    // 0x0DD0 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentinel_AnimGraphNode_RotationOffsetBlendSpace_BAEBD7C64BE7943EECF854BAD7A8DA75();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentinel_AnimGraphNode_TransitionResult_EC2A5FA045AB21694CDB0B819793FB5B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentinel_AnimGraphNode_TransitionResult_A3A53379442159FFAD8F538B65C23B88();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentinel_AnimGraphNode_TransitionResult_73DCD500403A6158F371DD92864AA66D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentinel_AnimGraphNode_TransitionResult_F51EAD1E464AAA88367E6E82761206BF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentinel_AnimGraphNode_TransitionResult_AC689A2D4B4DEFF23F7BE7958A6BFFE7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sentinel_AnimGraphNode_TransitionResult_EB84EE4249EFDB719D76CF945C065623();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_Sentinel(int32 EntryPoint);
}; // Size: 0xDD1

#endif
