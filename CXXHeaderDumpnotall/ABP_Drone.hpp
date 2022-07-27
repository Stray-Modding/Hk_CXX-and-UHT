#ifndef UE4SS_SDK_ABP_Drone_HPP
#define UE4SS_SDK_ABP_Drone_HPP

class UABP_Drone_C : public UHKAnimInstance
{
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_Trail AnimGraphNode_Trail;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    bool Go_unfold;
    bool Go_fold;
    FRotator Drone_DeltaRotation;
    FName antenne bone;
    class ABP_Drone_C* Drone;
    bool IsFolded;
    bool IsUnfolded;
    class UAnimSequence* CustomAnimation;
    float CallFunc_BreakRotator_Roll;
    float CallFunc_BreakRotator_Pitch;
    float CallFunc_BreakRotator_Yaw;
    float K2Node_Event_DeltaTimeX;
    class ABP_Drone_C* K2Node_DynamicCast_AsBP_Drone;
    bool K2Node_DynamicCast_bSuccess;

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Drone_AnimGraphNode_TransitionResult_9D056A8E49CF831ECF3D10B34F9997AD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Drone_AnimGraphNode_TransitionResult_76F1BB6D4A16BFC9C873148915BA5FEA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Drone_AnimGraphNode_TransitionResult_530EE3974172784831FFD3B413864EB9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Drone_AnimGraphNode_TransitionResult_4A1DEAE3494F0FCC09742A98D12EF7D4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Drone_AnimGraphNode_TransitionResult_36A66C634568083344D56A95A8431876();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Drone_AnimGraphNode_TransitionResult_2C3AD10045F338A4BBAA6B9ED97A8E57();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Drone_AnimGraphNode_TransitionResult_2B2F0CE443794F2CE8B0B584E2578A1C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Drone_AnimGraphNode_TransitionResult_1ADC130B4C789FCF9CC7D083A65C801C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Drone_AnimGraphNode_BlendSpacePlayer_9353F3324545608BDEC80AA9C623008E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Drone_AnimGraphNode_BlendListByBool_F1ACE3034804F8BBAFA738990546C007();
    void Drone_anim_unfold();
    void Drone_anim_fold();
    void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
    void AnimNotify_End_Unfold();
    void AnimNotify_End_Fold();
    void AnimGraph(FPoseLink& bpp__AnimGraph__pf);
};

#endif
