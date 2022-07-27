#ifndef UE4SS_SDK_Seq_Roberto_Tracking_HPP
#define UE4SS_SDK_Seq_Roberto_Tracking_HPP

class ASeq_Roberto_Tracking_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_Droid_C* Seamus;
    class ATriggerZone_C* TriggerZoneInFrontOfDeadEnd;
    class AActor* PointDeadEnd;
    class AActor* TrackerInHand;
    float Max_Distance_Droid/Cat;
    bool Cat_is_Near_Droid;
    class AActor* Pos Waiting Fixed Tracker;
    class ADial_RobertoJr_Flat_C* Dial Roberto Flat;
    bool RobertoIsAtTheDoor;
    bool TrackingStarted;
    class ASeq_Cycle_SearchTrash_C* Seq_Cycle_SearchTrash;
    bool TrackerMustBeVisibleAtReload;

    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void PrepareRobertoTracking();
    void OnStartSequence();
    void ExecuteUbergraph_Seq_Roberto_Tracking(int32 EntryPoint);
};

#endif
