#ifndef UE4SS_SDK_ABP_Cat_Cage_HPP
#define UE4SS_SDK_ABP_Cat_Cage_HPP

class UABP_Cat_Cage_C : public UHKAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0370 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x03C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0410 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x0438 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x04B8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x04E8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x0568 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0598 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0618 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0648 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x06C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x06F8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0778 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x07A8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0828 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0858 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x08D8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0908 (size: 0xB0)
    TEnumAsByte<E_CatCageState> TargetState;                                          // 0x09B8 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cat_Cage_AnimGraphNode_TransitionResult_AC029FAA4376F41876D67EA283B05D0D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cat_Cage_AnimGraphNode_TransitionResult_B91F8AD9445E468910C7B094BDF79285();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cat_Cage_AnimGraphNode_TransitionResult_A64B107A4E192F44C54658AF25F5E569();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cat_Cage_AnimGraphNode_TransitionResult_ADCD38F648774E7AC6B635945BD6CC3C();
    void ExecuteUbergraph_ABP_Cat_Cage(int32 EntryPoint);
}; // Size: 0x9B9

#endif
