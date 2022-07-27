#ifndef UE4SS_SDK_Dial_RobertoJr_Flat_HPP
#define UE4SS_SDK_Dial_RobertoJr_Flat_HPP

class ADial_RobertoJr_Flat_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStreamingComponent* Streaming;
    class ABP_Droid_C* Seamus;
    class AActor* ClueWall_look at;
    class AActor* Blueprints_Show;
    class ASeq_Roberto_Flat_C* Seq_Flat;
    class ABP_Door_ElliotScratch_C* ElliotDoor;
    class ASeq_Roberto_Tracking_C* Seq_Roberto_Tracking;
    TEnumAsByte<E_RobertoJRFlatState> DialState;
    bool FirstFlatDialogDone;
    bool SawDigicode;
    bool SawClueWall;
    bool Go_fix_tracker;
    bool SecretRoomTalkedOnce;
    bool BookRead;
    class ABP_Droid_C* Momo;
    class AActor* Pos_MomoInBarTyping;
    class ADial_MomoAfterBar_C* DialMomo;
    class AActor* Book;
    class ALevelSequenceActor* cinePingIp;
    bool StartTrackingDone;
    class AActor* Pos_AfterCineBeginTracking;
    class AActor* CatPos_AfterCineBeginTracking;
    class AActor* TrackerActor;
    class AActor* DronePosForIntroDialog;
    bool FirstDialDone;
    class AActor* InitCatMoveTo;
    class ABP_Dialog_Zone_C* BlockingDialogZone;
    class ABP_Savable_SkeletalMesh_C* plank;
    class AActor* OrientCamAfterCiné;
    class AActor* CatPos_StartCine_Tracker;
    class ACameraActor* Camera_SeamusWakeUp;
    class AActor* CamOrient_Out_SeamusWake;
    class AActor* DronePosForIntroDialog_02;
    class AActor* Tabouret;

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void BndEvt__Dial_RobertoJr_Flat_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_RobertoJr_Flat(int32 EntryPoint);
};

#endif
