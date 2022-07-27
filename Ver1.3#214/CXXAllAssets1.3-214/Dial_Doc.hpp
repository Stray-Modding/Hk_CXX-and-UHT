#ifndef UE4SS_SDK_Dial_Doc_HPP
#define UE4SS_SDK_Dial_Doc_HPP

class ADial_Doc_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ACameraActor* Cam;                                                          // 0x0340 (size: 0x8)
    TEnumAsByte<DialDoc_State> DialState;                                             // 0x0348 (size: 0x1)
    class ASEQ_DOC_Part1_C* SEQ_DOC_Part1;                                            // 0x0350 (size: 0x8)
    class ASEQ_InstallTorchLight_C* SEQ_InstallTorchLight;                            // 0x0358 (size: 0x8)
    class ABP_Droid_C* Doc;                                                           // 0x0360 (size: 0x8)
    class AActor* Generator;                                                          // 0x0368 (size: 0x8)
    bool Dial_WakeUp_IsFinished;                                                      // 0x0370 (size: 0x1)
    bool Dial_CatTouchTorchlight_IsFinished;                                          // 0x0371 (size: 0x1)
    class AActor* Chair;                                                              // 0x0378 (size: 0x8)
    bool Dial_OpenWindow_IsFinished;                                                  // 0x0380 (size: 0x1)
    class AActor* DroneWakeUp_POS;                                                    // 0x0388 (size: 0x8)
    class AActor* DroneWakeUp_POS2;                                                   // 0x0390 (size: 0x8)
    class AActor* DroneLocationDialog;                                                // 0x0398 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* CamModifierWakeUp_1;                   // 0x03A0 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* CamModifierWakeUp_2;                   // 0x03A8 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* CamModifierWakeUp_3;                   // 0x03B0 (size: 0x8)
    class AActor* DroneTorchLight_POS;                                                // 0x03B8 (size: 0x8)
    class AActor* DroneWindow_POS;                                                    // 0x03C0 (size: 0x8)
    class AActor* DroneLocationDialog_FillGenerator;                                  // 0x03C8 (size: 0x8)
    bool Dial_ChangeCamera;                                                           // 0x03D0 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Doc(int32 EntryPoint);
}; // Size: 0x3D1

#endif
