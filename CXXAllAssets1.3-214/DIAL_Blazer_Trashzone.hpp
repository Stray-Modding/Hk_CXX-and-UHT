#ifndef UE4SS_SDK_DIAL_Blazer_Trashzone_HPP
#define UE4SS_SDK_DIAL_Blazer_Trashzone_HPP

class ADIAL_Blazer_Trashzone_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Blazer;                                                        // 0x0348 (size: 0x8)
    class AActor* Newpaper;                                                           // 0x0350 (size: 0x8)
    class AActor* Drone_LookTrashzone;                                                // 0x0358 (size: 0x8)
    class AActor* Cam_LookTrashZone;                                                  // 0x0360 (size: 0x8)
    class AActor* Cam_PosBack;                                                        // 0x0368 (size: 0x8)
    class AActor* PointCatTP;                                                         // 0x0370 (size: 0x8)
    bool QuestDisguiseStarted;                                                        // 0x0378 (size: 0x1)
    class AActor* PreviousJacket;                                                     // 0x0380 (size: 0x8)
    class AActor* Jacket;                                                             // 0x0388 (size: 0x8)
    bool JacketReceived;                                                              // 0x0390 (size: 0x1)
    class AActor* Helmet;                                                             // 0x0398 (size: 0x8)
    bool HelmetReceived;                                                              // 0x03A0 (size: 0x1)
    class AActor* BlazerPos_AfterDisguise;                                            // 0x03A8 (size: 0x8)
    bool AfterDisguise;                                                               // 0x03B0 (size: 0x1)
    bool WaitCatToJumpIntoBox;                                                        // 0x03B1 (size: 0x1)
    class ASeq_IntroTrashZone_C* seqintrotrash;                                       // 0x03B8 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void BndEvt__DIAL_CarlosDisguise_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void PlaceCatAndCamInfrontOfBlazer();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_DIAL_Blazer_Trashzone(int32 EntryPoint);
}; // Size: 0x3C0

#endif
