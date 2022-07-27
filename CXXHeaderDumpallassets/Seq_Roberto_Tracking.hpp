#ifndef UE4SS_SDK_Seq_Roberto_Tracking_HPP
#define UE4SS_SDK_Seq_Roberto_Tracking_HPP

class ASeq_Roberto_Tracking_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Seamus;                                                        // 0x0270 (size: 0x8)
    class ATriggerZone_C* TriggerZoneInFrontOfDeadEnd;                                // 0x0278 (size: 0x8)
    class AActor* PointDeadEnd;                                                       // 0x0280 (size: 0x8)
    class AActor* TrackerInHand;                                                      // 0x0288 (size: 0x8)
    float Max_Distance_Droid/Cat;                                                     // 0x0290 (size: 0x4)
    bool Cat_is_Near_Droid;                                                           // 0x0294 (size: 0x1)
    class AActor* Pos Waiting Fixed Tracker;                                          // 0x0298 (size: 0x8)
    class ADial_RobertoJr_Flat_C* Dial Roberto Flat;                                  // 0x02A0 (size: 0x8)
    bool RobertoIsAtTheDoor;                                                          // 0x02A8 (size: 0x1)
    bool TrackingStarted;                                                             // 0x02A9 (size: 0x1)
    class ASeq_Cycle_SearchTrash_C* Seq_Cycle_SearchTrash;                            // 0x02B0 (size: 0x8)
    bool TrackerMustBeVisibleAtReload;                                                // 0x02B8 (size: 0x1)

    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void PrepareRobertoTracking();
    void OnStartSequence();
    void ExecuteUbergraph_Seq_Roberto_Tracking(int32 EntryPoint);
}; // Size: 0x2B9

#endif
