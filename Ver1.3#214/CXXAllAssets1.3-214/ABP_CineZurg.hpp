#ifndef UE4SS_SDK_ABP_CineZurg_HPP
#define UE4SS_SDK_ABP_CineZurg_HPP

class UABP_CineZurg_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x02F8 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0378 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x03F8 (size: 0x80)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;                            // 0x0478 (size: 0xA0)
    int32 AnimationIndex;                                                             // 0x0518 (size: 0x4)
    float Speed;                                                                      // 0x051C (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CineZurg_AnimGraphNode_SequencePlayer_9A4E60364CFC19C4D7C783BD2615C4FE();
    void ExecuteUbergraph_ABP_CineZurg(int32 EntryPoint);
}; // Size: 0x520

#endif
