#ifndef UE4SS_SDK_ABP_Drone_HPP
#define UE4SS_SDK_ABP_Drone_HPP

class UABP_Drone_C : public UHKAnimInstance
{
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02B8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x02E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0310 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0338 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0360 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0388 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x03B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0400 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0428 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x04A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x04D8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0558 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0588 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0608 (size: 0x30)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0638 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0660 (size: 0xA0)
    FAnimNode_Trail AnimGraphNode_Trail;                                              // 0x0700 (size: 0x260)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0960 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0980 (size: 0x20)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                              // 0x09A0 (size: 0xC8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0A68 (size: 0x80)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x0AE8 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0BD0 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0C00 (size: 0xB0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0CB0 (size: 0x48)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0CF8 (size: 0x158)
    bool Go_unfold;                                                                   // 0x0E50 (size: 0x1)
    bool Go_fold;                                                                     // 0x0E51 (size: 0x1)
    FRotator Drone_DeltaRotation;                                                     // 0x0E54 (size: 0xC)
    FName antenne bone;                                                               // 0x0E60 (size: 0x8)
    class ABP_Drone_C* Drone;                                                         // 0x0E68 (size: 0x8)
    bool IsFolded;                                                                    // 0x0E70 (size: 0x1)
    bool IsUnfolded;                                                                  // 0x0E71 (size: 0x1)
    class UAnimSequence* CustomAnimation;                                             // 0x0E78 (size: 0x8)
    float CallFunc_BreakRotator_Roll;                                                 // 0x0E80 (size: 0x4)
    float CallFunc_BreakRotator_Pitch;                                                // 0x0E84 (size: 0x4)
    float CallFunc_BreakRotator_Yaw;                                                  // 0x0E88 (size: 0x4)
    float K2Node_Event_DeltaTimeX;                                                    // 0x0E8C (size: 0x4)
    class ABP_Drone_C* K2Node_DynamicCast_AsBP_Drone;                                 // 0x0E90 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x0E98 (size: 0x1)

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
}; // Size: 0xEA0

#endif
