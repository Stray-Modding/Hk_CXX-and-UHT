#ifndef UE4SS_SDK_Seq_Roberto_BAR_HPP
#define UE4SS_SDK_Seq_Roberto_BAR_HPP

class ASeq_Roberto_BAR_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Seamus;                                                        // 0x0270 (size: 0x8)
    class AActor* InsideFlat_RobertoFrontOfDoorpos;                                   // 0x0278 (size: 0x8)
    class ADial_RobertoJr_Flat_C* Dial_Workshop;                                      // 0x0280 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x0288 (size: 0x8)
    bool WaitForTheCat;                                                               // 0x0290 (size: 0x1)
    class ADial_BarMan_C* Dial_Bar;                                                   // 0x0298 (size: 0x8)
    bool Roberto_is_going_to_flat;                                                    // 0x02A0 (size: 0x1)
    class ABP_Door_ClemFlat_Main_C* RobertoDoor;                                      // 0x02A8 (size: 0x8)
    bool Cat_is_Near_Droid;                                                           // 0x02B0 (size: 0x1)
    float Max_Distance_Droid/Cat;                                                     // 0x02B4 (size: 0x4)
    bool Roberto_is_in_the_flat;                                                      // 0x02B8 (size: 0x1)
    class ABP_Layer_C* BP_Layer_Customer;                                             // 0x02C0 (size: 0x8)
    class ADial_RobertoJR_Bar_C* Dial_RobertoJr;                                      // 0x02C8 (size: 0x8)
    bool StartInitDialog;                                                             // 0x02D0 (size: 0x1)
    class AActor* Mug;                                                                // 0x02D8 (size: 0x8)
    class AActor* momotabouret;                                                       // 0x02E0 (size: 0x8)
    class AActor* PosMomoStartMoveTo;                                                 // 0x02E8 (size: 0x8)
    class ADial_MomoAfterBar_C* DialMomoAfterBar;                                     // 0x02F0 (size: 0x8)
    class AActor* InsideFlat_SeatPos;                                                 // 0x02F8 (size: 0x8)
    class AActor* OutsideFlat_DoorPos;                                                // 0x0300 (size: 0x8)
    class AActor* OutsideFlat_HiddenEntrance;                                         // 0x0308 (size: 0x8)
    float Max_CloserDistance_Droid/Cat;                                               // 0x0310 (size: 0x4)
    bool Cat_is_ReallyNear_Droid;                                                     // 0x0314 (size: 0x1)
    class ALevelSequenceActor* Bar_Sequence;                                          // 0x0318 (size: 0x8)
    class ACameraActor* Camera_Outro;                                                 // 0x0320 (size: 0x8)
    bool MomoHasReachedDoor;                                                          // 0x0328 (size: 0x1)
    class ABP_Savable_SkeletalMesh_C* plank;                                          // 0x0330 (size: 0x8)
    class AActor* SeamusFlatSecretEntranceCol;                                        // 0x0338 (size: 0x8)
    class ASEQ_TriggerCameraSpline_C* CameraSplineSecretEntrance;                     // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid_Accoude;                                                 // 0x0348 (size: 0x8)
    class AActor* CatPos_Cam04;                                                       // 0x0350 (size: 0x8)
    class AActor* CatPos_Cam05;                                                       // 0x0358 (size: 0x8)
    bool BarIsWithoutSeamus;                                                          // 0x0360 (size: 0x1)
    class AActor* BarCollision;                                                       // 0x0368 (size: 0x8)
    class ABP_SplineRail_C* BarRail;                                                  // 0x0370 (size: 0x8)
    class AActor* BarMug;                                                             // 0x0378 (size: 0x8)
    bool Save35AlreadyDone;                                                           // 0x0380 (size: 0x1)
    bool Save36AlreadyDone;                                                           // 0x0381 (size: 0x1)
    class ASeq_Cycle_SearchTrash_C* SeqCycleSearchTrash;                              // 0x0388 (size: 0x8)
    class AActor* DronePosSeamus;                                                     // 0x0390 (size: 0x8)
    class AActor* DronePosBeforeSeamus;                                               // 0x0398 (size: 0x8)
    class AActor* DroneAfterDial_Pos;                                                 // 0x03A0 (size: 0x8)
    class AActor* DroneDialMomo_Pos;                                                  // 0x03A8 (size: 0x8)
    float MinimumDistanceOfMomoToTheDoor;                                             // 0x03B0 (size: 0x4)
    bool MomoVeryCloseToTheDoor;                                                      // 0x03B4 (size: 0x1)
    class ADial_consumer_C* Dial_consumer;                                            // 0x03B8 (size: 0x8)

    void LogicTrigger();
    void OnStartSequence();
    void ReceiveTick(float DeltaSeconds);
    void OnStartFromCheckpoint();
    void UpdateCatIsNearDroid();
    void Presentation de roberto();
    void SetUpMoveToLab();
    void MoveToLab();
    void BndEvt__Seq_Roberto_BAR_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ClearBarFromSeamus();
    void ExecuteUbergraph_Seq_Roberto_BAR(int32 EntryPoint);
}; // Size: 0x3C0

#endif
