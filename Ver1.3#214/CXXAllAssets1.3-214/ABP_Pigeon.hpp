#ifndef UE4SS_SDK_ABP_Pigeon_HPP
#define UE4SS_SDK_ABP_Pigeon_HPP

class UABP_Pigeon_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0370 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0398 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0418 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0448 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x04C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x04F8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0578 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x05A8 (size: 0xB0)
    bool Peck?;                                                                       // 0x0658 (size: 0x1)
    bool Fly?;                                                                        // 0x0659 (size: 0x1)
    float PeckPlayRate;                                                               // 0x065C (size: 0x4)
    float FlyPlayRate;                                                                // 0x0660 (size: 0x4)
    float RandomPeckTime;                                                             // 0x0664 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pigeon_AnimGraphNode_TransitionResult_67DD7363482E20099217089DFC062310();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pigeon_AnimGraphNode_TransitionResult_CF7401B142D0C9F3247819A475F74EA5();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_Pigeon(int32 EntryPoint);
}; // Size: 0x668

#endif
