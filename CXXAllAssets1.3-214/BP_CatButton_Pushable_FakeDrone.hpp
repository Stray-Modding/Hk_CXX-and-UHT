#ifndef UE4SS_SDK_BP_CatButton_Pushable_FakeDrone_HPP
#define UE4SS_SDK_BP_CatButton_Pushable_FakeDrone_HPP

class ABP_CatButton_Pushable_FakeDrone_C : public ABP_CatButton_PushableMeshBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    int32 PushCount;                                                                  // 0x02E8 (size: 0x4)
    class ASEQ_TransitionToAntVillage_C* SeqTransitionToAntVillage;                   // 0x02F0 (size: 0x8)

    void BndEvt__BP_CatButton_Pushable_FakeDrone_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_2_AnimationStarted__DelegateSignature();
    void ExecuteUbergraph_BP_CatButton_Pushable_FakeDrone(int32 EntryPoint);
}; // Size: 0x2F8

#endif
