#ifndef UE4SS_SDK_ABP_Cat_PawPush_HPP
#define UE4SS_SDK_ABP_Cat_PawPush_HPP

class UABP_Cat_PawPush_C : public UHKAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0370 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0398 (size: 0xA0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;                      // 0x0438 (size: 0xE8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                      // 0x0520 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0608 (size: 0x30)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0638 (size: 0xA0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x06D8 (size: 0xE8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x07C0 (size: 0xE8)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x08A8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x08D8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0958 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0988 (size: 0xB0)
    class UCatUsableComponent* PushableComponent;                                     // 0x0A38 (size: 0x8)
    bool ShouldPush;                                                                  // 0x0A40 (size: 0x1)
    float XAngle;                                                                     // 0x0A44 (size: 0x4)
    float YAngle;                                                                     // 0x0A48 (size: 0x4)
    bool UseRightPawA;                                                                // 0x0A4C (size: 0x1)
    bool UseRightPawB;                                                                // 0x0A4D (size: 0x1)
    bool ShouldExit;                                                                  // 0x0A4E (size: 0x1)
    float PushAnimationTimer;                                                         // 0x0A50 (size: 0x4)
    bool CanCancel;                                                                   // 0x0A54 (size: 0x1)
    bool IsPushA;                                                                     // 0x0A55 (size: 0x1)
    FVector2D AngleA;                                                                 // 0x0A58 (size: 0x8)
    FVector2D AngleB;                                                                 // 0x0A60 (size: 0x8)

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
}; // Size: 0xA68

#endif
