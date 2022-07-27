#ifndef UE4SS_SDK_ABP_Cat_PawPush_HPP
#define UE4SS_SDK_ABP_Cat_PawPush_HPP

class UABP_Cat_PawPush_C : public UHKAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    class UCatUsableComponent* PushableComponent;
    bool ShouldPush;
    float XAngle;
    float YAngle;
    bool UseRightPawA;
    bool UseRightPawB;
    bool ShouldExit;
    float PushAnimationTimer;
    bool CanCancel;
    bool IsPushA;
    FVector2D AngleA;
    FVector2D AngleB;

    void AnimGraph(FPoseLink& AnimGraph);
    void StartPush(class UCatUsableComponent* PushableComp);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cat_PawPush_AnimGraphNode_TransitionResult_8AAC36AA4AD85B174660E5B493B34C52();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cat_PawPush_AnimGraphNode_TransitionResult_7AC7B17B4DF9744BC160E1BF6A010402();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cat_PawPush_AnimGraphNode_TransitionResult_2E61B395446E8BDFC9475CB0AA50ED40();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cat_PawPush_AnimGraphNode_TransitionResult_754E17CB479063866B003E8868FD5500();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_PushDone();
    void AnimNotify_PushStarted();
    void ExecuteUbergraph_ABP_Cat_PawPush(int32 EntryPoint);
};

#endif
