#ifndef UE4SS_SDK_SEQ_cat_familly_intro_HPP
#define UE4SS_SDK_SEQ_cat_familly_intro_HPP

class ASEQ_cat_familly_intro_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    float Timeline_0_NewTrack_0_1A0C897648B5943DAEEDECA722D3B92F;                     // 0x0270 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1A0C897648B5943DAEEDECA722D3B92F; // 0x0274 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0278 (size: 0x8)
    bool Play_cine_intro;                                                             // 0x0280 (size: 0x1)
    class AActor* cat_bed;                                                            // 0x0288 (size: 0x8)
    class ACineCameraActor* Camera1;                                                  // 0x0290 (size: 0x8)
    class ACameraActor* Camera2;                                                      // 0x0298 (size: 0x8)
    class ACameraActor* CameraThird;                                                  // 0x02A0 (size: 0x8)
    class ADirectionalLight* MoonLight;                                               // 0x02A8 (size: 0x8)
    float BlendSpeed_cam;                                                             // 0x02B0 (size: 0x4)
    class ABP_CatButton_MoveToAnim_FakeCatIntro_C* WhiteAndRedCatButton;              // 0x02B8 (size: 0x8)
    bool WhiteAndRedCatDone;                                                          // 0x02C0 (size: 0x1)
    class ABP_CatButton_MoveToAnim_FakeCatIntro_C* RedCatButton;                      // 0x02C8 (size: 0x8)
    bool RedCatDone;                                                                  // 0x02D0 (size: 0x1)
    class ABP_CatButton_MoveToAnim_FakeCatIntro_C* BlackCatButton;                    // 0x02D8 (size: 0x8)
    bool BlackCatDone;                                                                // 0x02E0 (size: 0x1)
    class AActor* ChapterChange;                                                      // 0x02E8 (size: 0x8)
    bool ThunderStopped;                                                              // 0x02F0 (size: 0x1)
    class ABP_CatFollow_C* RedCat;                                                    // 0x02F8 (size: 0x8)
    class ABP_CatFollow_C* BlackCat;                                                  // 0x0300 (size: 0x8)
    class ABP_CatFollow_C* WhiteAndRedCat;                                            // 0x0308 (size: 0x8)
    class AActor* WhiteAndRedInitPos;                                                 // 0x0310 (size: 0x8)
    class AActor* RedInitPos;                                                         // 0x0318 (size: 0x8)
    class AActor* RedMovePos;                                                         // 0x0320 (size: 0x8)
    class AActor* BlackInitPos;                                                       // 0x0328 (size: 0x8)
    class UAnimSequence* AnimationFly;                                                // 0x0330 (size: 0x8)
    class UAnimSequence* AnimationStretch;                                            // 0x0338 (size: 0x8)
    int32 thunder index;                                                              // 0x0340 (size: 0x4)
    float thunder pitch;                                                              // 0x0344 (size: 0x4)
    float thunder volume;                                                             // 0x0348 (size: 0x4)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__Sound__EventFunc();
    void Timeline_0__rotation__EventFunc();
    void LogicTrigger();
    void ReceiveBeginPlay();
    void OnStartSequence();
    void BedIdle(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__SEQ_cat_familly_intro_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_SEQ_cat_familly_intro(int32 EntryPoint);
}; // Size: 0x34C

#endif
