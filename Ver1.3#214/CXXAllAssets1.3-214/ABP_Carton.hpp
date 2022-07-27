#ifndef UE4SS_SDK_ABP_Carton_HPP
#define UE4SS_SDK_ABP_Carton_HPP

class UABP_Carton_C : public UHKAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0370 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03C0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x03E8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0468 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0498 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0518 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0548 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x05C8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x05F8 (size: 0xB0)
    class UCOMP_CartonUsableComponent_C* Component;                                   // 0x06A8 (size: 0x8)
    TEnumAsByte<E_CartonUsableState> State;                                           // 0x06B0 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Carton_AnimGraphNode_TransitionResult_C6E8B2A24DEBDD9DFF76FD88DF881C86();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Carton_AnimGraphNode_TransitionResult_F61605FC40D4030C9E0B47B5C9181CD8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Carton_AnimGraphNode_TransitionResult_C45F3F7E418B30F49456C78BAFCEEB0A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Carton_AnimGraphNode_TransitionResult_5558526140EE5F4C0987C0841A207D21();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Carton_AnimGraphNode_TransitionResult_276EFC3D4320C9C3DA2EFCBE6D05E98E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Carton_AnimGraphNode_TransitionResult_D5DC27B04E4674D381AB6BA27DDB2D2F();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_Carton(int32 EntryPoint);
}; // Size: 0x6B1

#endif
