#ifndef UE4SS_SDK_DIAL_Street_Dancer_1_Residence_HPP
#define UE4SS_SDK_DIAL_Street_Dancer_1_Residence_HPP

class ADIAL_Street_Dancer_1_Residence_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0348 (size: 0x8)
    class ATape_Pile_C* Tape_Pile;                                                    // 0x0350 (size: 0x8)
    class AActor* Look_Camera;                                                        // 0x0358 (size: 0x8)
    class ABP_Boombox_C* Boombox;                                                     // 0x0360 (size: 0x8)
    class ABP_Falling_Cam_Plate_C* Cam_FallingPlate_Middle;                           // 0x0368 (size: 0x8)
    bool Cam_Middle_Broken;                                                           // 0x0370 (size: 0x1)
    class ABP_Falling_Cam_Plate_C* Cam_FallingPlate_Right;                            // 0x0378 (size: 0x8)
    bool Cam_Right_Broken;                                                            // 0x0380 (size: 0x1)
    class ABP_Falling_Cam_Plate_C* Cam_FallingPlate_Left;                             // 0x0388 (size: 0x8)
    bool Cam_Left_Broken;                                                             // 0x0390 (size: 0x1)
    bool Asked to Disable Cameras;                                                    // 0x0391 (size: 0x1)
    bool AllCamBroken;                                                                // 0x0392 (size: 0x1)
    bool CatGotTape;                                                                  // 0x0393 (size: 0x1)
    FDIAL_Street_Dancer_1_Residence_COnAllCamBroken OnAllCamBroken;                   // 0x0398 (size: 0x10)
    void OnAllCamBroken();
    bool TalkedOnce;                                                                  // 0x03A8 (size: 0x1)

    void OnDialogBegan();
    void BndEvt__DIAL_Street_Dancer_Residence_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void GiveTapeToCat&EndDial();
    void UpdateTalk();
    void OnPlateBroken_Event_0();
    void OnPlateBroken_Event_1();
    void OnPlateBroken_Event_2();
    void ExecuteUbergraph_DIAL_Street_Dancer_1_Residence(int32 EntryPoint);
    void OnAllCamBroken__DelegateSignature();
}; // Size: 0x3A9

#endif
