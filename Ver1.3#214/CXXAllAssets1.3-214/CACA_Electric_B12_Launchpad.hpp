#ifndef UE4SS_SDK_CACA_Electric_B12_Launchpad_HPP
#define UE4SS_SDK_CACA_Electric_B12_Launchpad_HPP

class ACACA_Electric_B12_Launchpad_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USkeletalMeshComponent* SKM_Drone;                                          // 0x0230 (size: 0x8)
    class UCOMP_GrabbableDrop_C* COMP_GrabbableDrop;                                  // 0x0238 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0240 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0248 (size: 0x8)
    class UAudioComponent* B12_computer_loading_01;                                   // 0x0250 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0258 (size: 0x8)
    class USceneComponent* DronePivot;                                                // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Downloader;                                           // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)
    float Launch_Duration;                                                            // 0x0278 (size: 0x4)
    float Charge_Data_Duration;                                                       // 0x027C (size: 0x4)
    class ATriggerZone_C* Cat_Detection_Box;                                          // 0x0280 (size: 0x8)
    class ACameraActor* OpenDoor_Cam;                                                 // 0x0288 (size: 0x8)
    class ABP_B12Flat_SecretDoor_C* SecretDoor;                                       // 0x0290 (size: 0x8)
    class ACACA_BigScreen_B12Flat_C* FirstScreen;                                     // 0x0298 (size: 0x8)
    class ASeq_MeetB12_C* Seq_MeetB12;                                                // 0x02A0 (size: 0x8)
    class AActor* Point_CatMove_Openingdoor;                                          // 0x02A8 (size: 0x8)
    class ABP_DoorWindowBase_C* FirstDoor;                                            // 0x02B0 (size: 0x8)
    TArray<class ACACA_Electric_Plug_Female_C*> Female_Plug_Launcher;                 // 0x02B8 (size: 0x10)
    TArray<class ACACA_Electric_Plug_Female_C*> Female_Plug_DataServer;               // 0x02C8 (size: 0x10)
    TArray<class ABP_Catbutton_Grabbable_EnergyPlug_C*> Grabbable_Plug;               // 0x02D8 (size: 0x10)
    TArray<class ACACA_Launchpad_Screen_C*> Small_Screens;                            // 0x02E8 (size: 0x10)
    TArray<class ACac_B12_Spirit_C*> SpiritToActivate;                                // 0x02F8 (size: 0x10)
    TArray<class AStaticMeshActor*> TechRoomBoxes;                                    // 0x0308 (size: 0x10)
    TArray<class ABP_FollowingCamera_C*> SecurityCams;                                // 0x0318 (size: 0x10)
    TEnumAsByte<E_Launchpad_Mode> LaunchpadMode;                                      // 0x0328 (size: 0x1)
    int32 Charge_Count;                                                               // 0x032C (size: 0x4)
    FRotator Rot_Drone_Previous;                                                      // 0x0330 (size: 0xC)
    bool Launched;                                                                    // 0x033C (size: 0x1)
    class ACACA_CatButtonProps_Drone_Alex_C* Drone_Attached;                          // 0x0340 (size: 0x8)
    class ACACA_CatButtonProps_Drone_Alex_C* Fake_Drone;                              // 0x0348 (size: 0x8)
    FTransform DroneTransf;                                                           // 0x0350 (size: 0x30)
    bool ISDroneInSecretRoomOld;                                                      // 0x0380 (size: 0x1)
    class UMaterialInstanceDynamic* Downloader_DynMat;                                // 0x0388 (size: 0x8)
    class ABP_Light_NeonLarge_Child_RealTime_C* Neon_Launcher;                        // 0x0390 (size: 0x8)
    TArray<class AActor*> Screen_Arrow_Down;                                          // 0x0398 (size: 0x10)
    TArray<class ACACA_Launchpad_Screen_C*> Screen_Arrow_Left;                        // 0x03A8 (size: 0x10)
    TArray<class ACACA_Launchpad_Screen_C*> Screen_Arrow_Right;                       // 0x03B8 (size: 0x10)
    class AActor* FX_POS;                                                             // 0x03C8 (size: 0x8)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA1FAE9571();
    void Tick_6246EF4646E19036986D72BA1FAE9571(float Ratio);
    void Complete_6246EF4646E19036986D72BA9CA75F4F();
    void Tick_6246EF4646E19036986D72BA9CA75F4F(float Ratio);
    void Complete_6246EF4646E19036986D72BA13E980FA();
    void Tick_6246EF4646E19036986D72BA13E980FA(float Ratio);
    void Complete_6246EF4646E19036986D72BA2C561B2D();
    void Tick_6246EF4646E19036986D72BA2C561B2D(float Ratio);
    void StartRotation();
    void OnPlugFemaleLauncher(class AActor* ItemConnected, class ACACA_Electric_Plug_Female_C* FemalePlug);
    void LoadingData(class ACACA_Electric_Plug_Female_C* FemalePlug);
    void Snap_Drone(bool Automatic);
    void StartPlugPuzzle();
    void LogicTrigger();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Change_Launchpad_Mode(TEnumAsByte<E_Launchpad_Mode> LaunchpadMode);
    void OnEndMovement_Event_0(bool IsOpen);
    void SetTechRoomBoxes_Color(class UMaterialInterface* Material);
    void Start_Blink_techRoomBoxes(float Speed, class UMaterialInterface* Mat_Blink_1, class UMaterialInterface* Mat_Blink_2);
    void Stop_Blink_techRoomBoxes(class UMaterialInterface* EndColor);
    void ReceiveTick(float DeltaSeconds);
    void OnGrabbed_Event_0(class UCOMP_Grabbable_C* Grabbable);
    void OnDropped_Event_0(class UCOMP_Grabbable_C* Grabbable);
    void Cancel DownloaderBlink();
    void AutoPlug_AfterCheckpoint();
    void SetArrowScreenMaterial(class UMaterialInterface* Material_Down, TEnumAsByte<E_Launchpad_Screen_mode> Mode_Left, TEnumAsByte<E_Launchpad_Screen_mode> Mode_Right);
    void BndEvt__CACA_Electric_B12_Launchpad_COMP_GrabbableDrop_K2Node_ComponentBoundEvent_3_ReleaseGrabbable_InZone__DelegateSignature(class ABP_CatPawn_C* cat, class UCOMP_Grabbable_C* Grabbable);
    void Stop Rotation();
    void ExecuteUbergraph_CACA_Electric_B12_Launchpad(int32 EntryPoint);
}; // Size: 0x3D0

#endif
