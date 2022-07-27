#ifndef UE4SS_SDK_ABP_Rat_HPP
#define UE4SS_SDK_ABP_Rat_HPP

class UABP_Rat_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x02F8 (size: 0x80)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;                            // 0x0378 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x0418 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0498 (size: 0x80)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x0518 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x05E0 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0660 (size: 0x80)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                              // 0x06E0 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x07A8 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0828 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x08A8 (size: 0x80)
    FAnimNode_Inertialization AnimGraphNode_Inertialization;                          // 0x0928 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0998 (size: 0xA0)
    int32 Blend_index;                                                                // 0x0A38 (size: 0x4)
    float Blend_left_right;                                                           // 0x0A3C (size: 0x4)
    FName Tail;                                                                       // 0x0A40 (size: 0x8)
    float Blend_walk_run;                                                             // 0x0A48 (size: 0x4)
    float walk_run_playrate;                                                          // 0x0A4C (size: 0x4)
    bool Walk/Run;                                                                    // 0x0A50 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_Rat(int32 EntryPoint);
}; // Size: 0xA51

#endif
