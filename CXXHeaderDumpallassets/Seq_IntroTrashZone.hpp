#ifndef UE4SS_SDK_Seq_IntroTrashZone_HPP
#define UE4SS_SDK_Seq_IntroTrashZone_HPP

class ASeq_IntroTrashZone_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    bool StartPickUpBox;                                                              // 0x0278 (size: 0x1)
    class ABP_Droid_C* Blazer;                                                        // 0x0280 (size: 0x8)
    class ABP_Droid_C* Blazer_2;                                                      // 0x0288 (size: 0x8)
    class ABP_Droid_C* Gatekeeper;                                                    // 0x0290 (size: 0x8)
    class ABP_Droid_C* DroidCleaning;                                                 // 0x0298 (size: 0x8)
    class ABP_DoorWindowBase_C* Door;                                                 // 0x02A0 (size: 0x8)
    class AActor* Blazer_Point_ToBox;                                                 // 0x02A8 (size: 0x8)
    class ACACA_CartonHideOut_C* Box;                                                 // 0x02B0 (size: 0x8)
    class AActor* Box_Point_Blazer;                                                   // 0x02B8 (size: 0x8)
    class AActor* Box_Point_TrashZone;                                                // 0x02C0 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* CamModifier;                           // 0x02C8 (size: 0x8)
    class ABP_PushCameraVolume_C* Cam_Zone_End;                                       // 0x02D0 (size: 0x8)
    class AActor* Camera_JumpIn;                                                      // 0x02D8 (size: 0x8)
    FTransform BoxTransTemp;                                                          // 0x02E0 (size: 0x30)
    bool TrashZoneEntered;                                                            // 0x0310 (size: 0x1)
    class AActor* sponge;                                                             // 0x0318 (size: 0x8)
    class ABP_SplineCamera_C* cameraSpline;                                           // 0x0320 (size: 0x8)
    float Offset Distance on Spline Front;                                            // 0x0328 (size: 0x4)

    void Complete_6246EF4646E19036986D72BA4FF00F97();
    void Tick_6246EF4646E19036986D72BA4FF00F97(float Ratio);
    void Complete_6246EF4646E19036986D72BA04375ED3();
    void Tick_6246EF4646E19036986D72BA04375ED3(float Ratio);
    void Complete_6246EF4646E19036986D72BA3B709473();
    void Tick_6246EF4646E19036986D72BA3B709473(float Ratio);
    void OnStartSequence();
    void ReceiveTick(float DeltaSeconds);
    void AfterUseDone_Event_0(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ExecuteUbergraph_Seq_IntroTrashZone(int32 EntryPoint);
}; // Size: 0x32C

#endif
