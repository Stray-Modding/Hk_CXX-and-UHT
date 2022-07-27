#ifndef UE4SS_SDK_Dial_RobertoJr_Flat_HPP
#define UE4SS_SDK_Dial_RobertoJr_Flat_HPP

class ADial_RobertoJr_Flat_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Seamus;                                                        // 0x0348 (size: 0x8)
    class AActor* ClueWall_look at;                                                   // 0x0350 (size: 0x8)
    class AActor* Blueprints_Show;                                                    // 0x0358 (size: 0x8)
    class ASeq_Roberto_Flat_C* Seq_Flat;                                              // 0x0360 (size: 0x8)
    class ABP_Door_ElliotScratch_C* ElliotDoor;                                       // 0x0368 (size: 0x8)
    class ASeq_Roberto_Tracking_C* Seq_Roberto_Tracking;                              // 0x0370 (size: 0x8)
    TEnumAsByte<E_RobertoJRFlatState> DialState;                                      // 0x0378 (size: 0x1)
    bool FirstFlatDialogDone;                                                         // 0x0379 (size: 0x1)
    bool SawDigicode;                                                                 // 0x037A (size: 0x1)
    bool SawClueWall;                                                                 // 0x037B (size: 0x1)
    bool Go_fix_tracker;                                                              // 0x037C (size: 0x1)
    bool SecretRoomTalkedOnce;                                                        // 0x037D (size: 0x1)
    bool BookRead;                                                                    // 0x037E (size: 0x1)
    class ABP_Droid_C* Momo;                                                          // 0x0380 (size: 0x8)
    class AActor* Pos_MomoInBarTyping;                                                // 0x0388 (size: 0x8)
    class ADial_MomoAfterBar_C* DialMomo;                                             // 0x0390 (size: 0x8)
    class AActor* Book;                                                               // 0x0398 (size: 0x8)
    class ALevelSequenceActor* cinePingIp;                                            // 0x03A0 (size: 0x8)
    bool StartTrackingDone;                                                           // 0x03A8 (size: 0x1)
    class AActor* Pos_AfterCineBeginTracking;                                         // 0x03B0 (size: 0x8)
    class AActor* CatPos_AfterCineBeginTracking;                                      // 0x03B8 (size: 0x8)
    class AActor* TrackerActor;                                                       // 0x03C0 (size: 0x8)
    class AActor* DronePosForIntroDialog;                                             // 0x03C8 (size: 0x8)
    bool FirstDialDone;                                                               // 0x03D0 (size: 0x1)
    class AActor* InitCatMoveTo;                                                      // 0x03D8 (size: 0x8)
    class ABP_Dialog_Zone_C* BlockingDialogZone;                                      // 0x03E0 (size: 0x8)
    class ABP_Savable_SkeletalMesh_C* plank;                                          // 0x03E8 (size: 0x8)
    class AActor* OrientCamAfterCiné;                                                 // 0x03F0 (size: 0x8)
    class AActor* CatPos_StartCine_Tracker;                                           // 0x03F8 (size: 0x8)
    class ACameraActor* Camera_SeamusWakeUp;                                          // 0x0400 (size: 0x8)
    class AActor* CamOrient_Out_SeamusWake;                                           // 0x0408 (size: 0x8)
    class AActor* DronePosForIntroDialog_02;                                          // 0x0410 (size: 0x8)
    class AActor* Tabouret;                                                           // 0x0418 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void BndEvt__Dial_RobertoJr_Flat_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_RobertoJr_Flat(int32 EntryPoint);
}; // Size: 0x420

#endif
