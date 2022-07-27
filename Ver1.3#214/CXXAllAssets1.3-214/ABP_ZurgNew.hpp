#ifndef UE4SS_SDK_ABP_ZurgNew_HPP
#define UE4SS_SDK_ABP_ZurgNew_HPP

class UABP_ZurgNew_C : public UHKAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20;                     // 0x02F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19;                     // 0x0320 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18;                     // 0x0348 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17;                     // 0x0370 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;                     // 0x0398 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12;                         // 0x03C0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_13;                               // 0x0440 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;                         // 0x0470 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_12;                               // 0x04F0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;                         // 0x0520 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_11;                               // 0x05A0 (size: 0x30)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;                     // 0x05D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;                     // 0x05F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;                     // 0x0620 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x0648 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x0670 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0698 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x06C0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x06E8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x0710 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0738 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0760 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0788 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x07B0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x07D8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0800 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0828 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x0850 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_10;                               // 0x08D0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x0900 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_9;                                // 0x0980 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x09B0 (size: 0x80)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;                      // 0x0A30 (size: 0xC0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;                            // 0x0AF0 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x0B18 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x0BB8 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x0C38 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0C68 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x0CE8 (size: 0x30)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x0D18 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x0D40 (size: 0x30)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x0D70 (size: 0xC0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x0E30 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x0E58 (size: 0x80)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0ED8 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0F78 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x0FF8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x1028 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x10A8 (size: 0x80)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x1128 (size: 0xC0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x11E8 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x1210 (size: 0xA0)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x12B0 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x12E0 (size: 0x80)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x1360 (size: 0x30)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x1390 (size: 0x28)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x13B8 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2;                              // 0x13E8 (size: 0xB0)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x1498 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;                              // 0x14C8 (size: 0xB0)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x1578 (size: 0x30)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x15A8 (size: 0xB0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x1658 (size: 0xE8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x1740 (size: 0x158)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x1898 (size: 0x48)
    float FrontalVelocity;                                                            // 0x18E0 (size: 0x4)
    float LateralVelocity;                                                            // 0x18E4 (size: 0x4)
    float InitialWalkSpeed;                                                           // 0x18E8 (size: 0x4)
    EZurgState ZurgCurrentState;                                                      // 0x18EC (size: 0x1)
    class UAnimSequence* CurrentInterestAnimation;                                    // 0x18F0 (size: 0x8)
    bool bIsMoving;                                                                   // 0x18F8 (size: 0x1)
    class ABP_ZurgPawnSlave_C* BP_ZurgPawn;                                           // 0x1900 (size: 0x8)
    float MovementBlendSpacePlaySpeed;                                                // 0x1908 (size: 0x4)
    class UZurgNewSettings* ZurgSettings;                                             // 0x1910 (size: 0x8)
    class UBlendSpace* NormalMovementBlendSpace;                                      // 0x1918 (size: 0x8)
    float MovementBlendSpacePlayRate;                                                 // 0x1920 (size: 0x4)
    float StunnedRandomPlayRate;                                                      // 0x1924 (size: 0x4)
    bool bIsStunned;                                                                  // 0x1928 (size: 0x1)
    float StunnedTime;                                                                // 0x192C (size: 0x4)
    class UAnimSequence* StunnedEndAnimation;                                         // 0x1930 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void TickUpdateInterestAnimation();
    void TickUpdateState();
    void TickUpdateSpeeds();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_455EB90241A4C94B2A327582E500AD15();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_0650E274418B6801E85C719614029CA9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_65AC7AAB4F69EB94B4CA40B58D11A738();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_C6C0FA3A4F891B426660368D90498F4B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_09CC00AD45AF19DC97A6C7A5447E61C3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_8B6FD3BC4C62F75C15693AAE0B7BA7D1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_0D64FAEA4012034F57D30A8ED6D01EC7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_2DFEA8074828E9703CCAF3BB29588E65();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_CABF7B6B4F50144773D60B94CDEF3650();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_4BBE218F4CFEE5F34353B493495D16A0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_9BBCCFE9405B773812242B8EC95245A8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_ADD722F342CF8628CF347B904C77E81A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_314A587449149E62953642BEBB7E715C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_624477CB4A79C4BC13FFB1A284FC7F20();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_D1C164694F11F2D699121D9918588DDB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_B6D927D645A8E06ECB3030B2560C5968();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_214B323B4828737866F7FA81499807B4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_C3F3000348A2C8D6FA318E92FD6BD2B0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_21A7BE0F496FE97FA143998121B8AC14();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ZurgNew_AnimGraphNode_TransitionResult_BC72284540B1289DFD8F9281E7B2FE9E();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void AnimNotify_footstep();
    void AnimNotify_OnEnterStunned();
    void AnimNotify_OnStunnedEndEnterEvent();
    void AnimNotify_OnStunnedEndExitEvent();
    void ExecuteUbergraph_ABP_ZurgNew(int32 EntryPoint);
}; // Size: 0x1938

#endif
