#ifndef UE4SS_SDK_BP_CatButton_PushableZapette_HPP
#define UE4SS_SDK_BP_CatButton_PushableZapette_HPP

class ABP_CatButton_PushableZapette_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0230 (size: 0x8)
    class USceneComponent* CatPos;                                                    // 0x0238 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatButtonMoveToAnim;                            // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    class ABP_interactive_screen_C* Tele;                                             // 0x0260 (size: 0x8)
    int32 Channel;                                                                    // 0x0268 (size: 0x4)

    void BndEvt__BP_CatButton_PushableZapette_COMP_CatButtonMoveToAnim_K2Node_ComponentBoundEvent_0_AnimationStarted__DelegateSignature();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CatButton_PushableZapette(int32 EntryPoint);
}; // Size: 0x26C

#endif
