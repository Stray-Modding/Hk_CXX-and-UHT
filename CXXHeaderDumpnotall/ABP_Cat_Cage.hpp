#ifndef UE4SS_SDK_ABP_Cat_Cage_HPP
#define UE4SS_SDK_ABP_Cat_Cage_HPP

class UABP_Cat_Cage_C : public UHKAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;
    FAnimNode_StateResult AnimGraphNode_StateResult_6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    TEnumAsByte<E_CatCageState> TargetState;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cat_Cage_AnimGraphNode_TransitionResult_AC029FAA4376F41876D67EA283B05D0D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cat_Cage_AnimGraphNode_TransitionResult_B91F8AD9445E468910C7B094BDF79285();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cat_Cage_AnimGraphNode_TransitionResult_A64B107A4E192F44C54658AF25F5E569();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cat_Cage_AnimGraphNode_TransitionResult_ADCD38F648774E7AC6B635945BD6CC3C();
    void ExecuteUbergraph_ABP_Cat_Cage(int32 EntryPoint);
};

#endif
