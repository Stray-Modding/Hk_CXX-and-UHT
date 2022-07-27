#ifndef UE4SS_SDK_ABP_Sentinel_HPP
#define UE4SS_SDK_ABP_Sentinel_HPP

class UABP_Sentinel_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_1;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;
    float FrontVelocity;
    float LateralVelocity;
    TEnumAsByte<ENUM_SentinelAI_State> CurrentAiStatus;
    bool bIsSeeingTarget;
    class ABP_SentinelAI_C* BP_SentinelPawn;
    FVector LastFramePawnLocation;
    FVector DeltaFrameLocation;
    bool IsActive;

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
};

#endif
