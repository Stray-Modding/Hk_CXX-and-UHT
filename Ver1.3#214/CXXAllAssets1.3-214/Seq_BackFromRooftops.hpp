#ifndef UE4SS_SDK_Seq_BackFromRooftops_HPP
#define UE4SS_SDK_Seq_BackFromRooftops_HPP

class ASeq_BackFromRooftops_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ACameraActor* camerareturn;                                                 // 0x0270 (size: 0x8)
    class ABP_RotatingWindow_C* SmallWindow;                                          // 0x0278 (size: 0x8)
    class ABP_SplineRail_C* SmallWindowRail;                                          // 0x0280 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x0288 (size: 0x8)
    class AActor* Transciever;                                                        // 0x0290 (size: 0x8)
    class AActor* notebook;                                                           // 0x0298 (size: 0x8)
    class AActor* Message;                                                            // 0x02A0 (size: 0x8)
    bool MessageOnTheWall;                                                            // 0x02A8 (size: 0x1)
    class AActor* MessageDialogZone;                                                  // 0x02B0 (size: 0x8)
    TArray<TSoftObjectPtr<UWorld>> PreloadedLevels;                                   // 0x02B8 (size: 0x10)
    TArray<FName> TransitionGroups;                                                   // 0x02C8 (size: 0x10)
    class AActor* WindowPos;                                                          // 0x02D8 (size: 0x8)
    class AActor* GroundPos;                                                          // 0x02E0 (size: 0x8)
    class AActor* CloseCamPos;                                                        // 0x02E8 (size: 0x8)
    class ADial_MomoNote_C* Dial B12;                                                 // 0x02F0 (size: 0x8)
    class ABP_MomoWindowToSlums_C* MomoWindowSlums;                                   // 0x02F8 (size: 0x8)
    class ABP_SplineRail_C* RailOnWindowToSlums;                                      // 0x0300 (size: 0x8)
    class AActor* TV;                                                                 // 0x0308 (size: 0x8)
    class ALight* TvLight;                                                            // 0x0310 (size: 0x8)
    class ABP_Trigger_Titles_C* Title;                                                // 0x0318 (size: 0x8)
    class ATriggerZone_C* CineFirstTimeMomoTriggerZone;                               // 0x0320 (size: 0x8)
    bool TranceiverAndNoteBookHidden;                                                 // 0x0328 (size: 0x1)

    void SetUpFlatAfterRooftops();
    void OnStartSequence();
    void ReceiveBeginPlay();
    void BndEvt__Seq_BackFromRooftops_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void LogicTrigger();
    void ExecuteUbergraph_Seq_BackFromRooftops(int32 EntryPoint);
}; // Size: 0x329

#endif
