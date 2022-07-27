#ifndef UE4SS_SDK_SEQ_CatFallFromWoodPlank_HPP
#define UE4SS_SDK_SEQ_CatFallFromWoodPlank_HPP

class ASEQ_CatFallFromWoodPlank_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_PushableWoodPlank_Break_C* WoodPlank;                                   // 0x0270 (size: 0x8)
    class AActor* Jump_Target_POS;                                                    // 0x0278 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_PlanJump;                             // 0x0280 (size: 0x8)
    class ASkeletalMeshActor* CatAnimated;                                            // 0x0288 (size: 0x8)
    class ABP_Sign_FollowLight_C* B12Sign_On;                                         // 0x0290 (size: 0x8)
    class ABP_Sign_FollowLight_C* B12Sign_Off;                                        // 0x0298 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x02A0 (size: 0x8)
    bool Break;                                                                       // 0x02A8 (size: 0x1)
    class AActor* bucket;                                                             // 0x02B0 (size: 0x8)
    class AActor* FX_POS;                                                             // 0x02B8 (size: 0x8)

    void Complete_6246EF4646E19036986D72BABC2C46C6();
    void Tick_6246EF4646E19036986D72BABC2C46C6(float Ratio);
    void LogicTrigger();
    void BndEvt__SEQ_CatFallFromWoodPlank_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__SEQ_CatFallFromWoodPlank_m_saveComponent_K2Node_ComponentBoundEvent_1_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void Camera_Shake(float Scale);
    void ExecuteUbergraph_SEQ_CatFallFromWoodPlank(int32 EntryPoint);
}; // Size: 0x2C0

#endif
