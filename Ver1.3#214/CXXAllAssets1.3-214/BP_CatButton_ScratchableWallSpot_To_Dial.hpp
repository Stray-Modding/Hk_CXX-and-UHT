#ifndef UE4SS_SDK_BP_CatButton_ScratchableWallSpot_To_Dial_HPP
#define UE4SS_SDK_BP_CatButton_ScratchableWallSpot_To_Dial_HPP

class ABP_CatButton_ScratchableWallSpot_To_Dial_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UArrowComponent* Voice_Origin;                                              // 0x0238 (size: 0x8)
    class UCOMP_Voice_C* COMP_Voice;                                                  // 0x0240 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0250 (size: 0x8)
    class UArrowComponent* DronePos;                                                  // 0x0258 (size: 0x8)
    class UTalkableComponent* talkable;                                               // 0x0260 (size: 0x8)
    class UArrowComponent* CatPos;                                                    // 0x0268 (size: 0x8)
    class UCOMP_CatScratchableComponent_C* COMP_CatScratchableComponent;              // 0x0270 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0278 (size: 0x8)
    FText Name;                                                                       // 0x0280 (size: 0x18)
    class ADialog* Dial;                                                              // 0x0298 (size: 0x8)
    int32 Nb_Of_Scratch;                                                              // 0x02A0 (size: 0x4)
    bool DoOnce;                                                                      // 0x02A4 (size: 0x1)
    int32 ScratchCount;                                                               // 0x02A8 (size: 0x4)
    float Random Voice Pitch;                                                         // 0x02AC (size: 0x4)

    void ReceiveBeginPlay();
    void BndEvt__COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_0_OnScratched__DelegateSignature(class UCOMP_CatScratchableComponent_C* Scratchable);
    void Start Dialog();
    void After Dialog();
    void BndEvt__BP_CatButton_ScratchableWallSpot_To_Dial_Talkable_K2Node_ComponentBoundEvent_1_TalkableLineDelegate__DelegateSignature(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    void BndEvt__BP_CatButton_ScratchableWallSpot_To_Dial_Talkable_K2Node_ComponentBoundEvent_2_TalkableLineDelegate__DelegateSignature(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    void BndEvt__BP_CatButton_ScratchableWallSpot_To_Dial_Talkable_K2Node_ComponentBoundEvent_3_TalkableDelegate__DelegateSignature(class UTalkableComponent* _talkableComponent);
    void ExecuteUbergraph_BP_CatButton_ScratchableWallSpot_To_Dial(int32 EntryPoint);
}; // Size: 0x2B0

#endif
