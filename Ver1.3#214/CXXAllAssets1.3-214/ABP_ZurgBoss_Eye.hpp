#ifndef UE4SS_SDK_ABP_ZurgBoss_Eye_HPP
#define UE4SS_SDK_ABP_ZurgBoss_Eye_HPP

class UABP_ZurgBoss_Eye_C : public UHKAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0370 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0398 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03C0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x03E8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0468 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0498 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0518 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0548 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x05C8 (size: 0xA0)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                              // 0x0668 (size: 0xC8)
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;                             // 0x0730 (size: 0x10)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x0740 (size: 0x1B0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x08F0 (size: 0x80)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0970 (size: 0x1B0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0B20 (size: 0x20)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0B40 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0B70 (size: 0xB0)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x0C20 (size: 0x158)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0D78 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0DA0 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0E40 (size: 0x80)
    FVector LookAtLocation;                                                           // 0x0EC0 (size: 0xC)
    class ABP_ZurgBoss_Eye_C* BP_EyeBoss;                                             // 0x0ED0 (size: 0x8)
    float IdlePlayRate;                                                               // 0x0ED8 (size: 0x4)
    float IdleStartPosition;                                                          // 0x0EDC (size: 0x4)
    TEnumAsByte<ENUM_ZurgBoss_State> CurrentState;                                    // 0x0EE0 (size: 0x1)
    bool bEyeFollowCat;                                                               // 0x0EE1 (size: 0x1)
    FSmootherVector LookAtSmoother;                                                   // 0x0EE4 (size: 0x1C)

    void AnimGraph(FPoseLink& AnimGraph);
    void UpdateLookAt(float _deltaTime);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgBoss_Eye_AnimGraphNode_BlendListByBool_868DE86E40774040D5A19EA6B2ADA908();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgBoss_Eye_AnimGraphNode_BlendListByBool_66D522AB4E8D98BF9AFEA0A6FD4EB649();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgBoss_Eye_AnimGraphNode_TransitionResult_773B36F64BB2CA2B39F7A08BB2C16245();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgBoss_Eye_AnimGraphNode_TransitionResult_5BAC9C714BB3EE66747FC09203B6F983();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgBoss_Eye_AnimGraphNode_TransitionResult_C08317A24D5CE5E7A3C5D6918FE529AA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgBoss_Eye_AnimGraphNode_TransitionResult_1D3AD7124AB213C052BD579A2A27E79B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgBoss_Eye_AnimGraphNode_TransitionResult_16E667D642C2615157CAEAACAEF5BC64();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgBoss_Eye_AnimGraphNode_TransitionResult_89246493446A8BF19593E28A953F88DA();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_ABP_ZurgBoss_Eye(int32 EntryPoint);
}; // Size: 0xF00

#endif
