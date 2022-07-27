#ifndef UE4SS_SDK_ABP_Cat_Cinematic_HPP
#define UE4SS_SDK_ABP_Cat_Cinematic_HPP

class UABP_Cat_Cinematic_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x02F8 (size: 0x80)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0378 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0398 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x03C0 (size: 0x1B0)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0570 (size: 0x1B0)
    class UAnimSequenceBase* Animation;                                               // 0x0720 (size: 0x8)
    class UAnimSequenceBase* Additive;                                                // 0x0728 (size: 0x8)
    class ABp_Cat_Cinematic_C* Bp_Cat_Cinematic;                                      // 0x0730 (size: 0x8)
    FRotator eyes Rotation;                                                           // 0x0738 (size: 0xC)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Cat_Cinematic(int32 EntryPoint);
}; // Size: 0x744

#endif
