#ifndef UE4SS_SDK_BP_CatButton_PushableRadio_HPP
#define UE4SS_SDK_BP_CatButton_PushableRadio_HPP

class ABP_CatButton_PushableRadio_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UArrowComponent* CatPos;                                                    // 0x0230 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatButtonMoveToAnim;                            // 0x0238 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0240 (size: 0x8)
    class UCOMP_ingame_player_C* COMP_ingame_player;                                  // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0250 (size: 0x8)
    bool is on;                                                                       // 0x0258 (size: 0x1)
    int32 Channel;                                                                    // 0x025C (size: 0x4)
    float playhead;                                                                   // 0x0260 (size: 0x4)

    void UserConstructionScript();
    void LogicTrigger();
    void BndEvt__BP_Boombox_Save_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void BndEvt__CACA_Launchpad_Screen_Save_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void BndEvt__BP_CatButton_PushableRadio_COMP_CatButtonMoveToAnim_K2Node_ComponentBoundEvent_3_AnimationStarted__DelegateSignature();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CatButton_PushableRadio(int32 EntryPoint);
}; // Size: 0x264

#endif
