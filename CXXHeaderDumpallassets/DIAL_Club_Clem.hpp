#ifndef UE4SS_SDK_DIAL_Club_Clem_HPP
#define UE4SS_SDK_DIAL_Club_Clem_HPP

class ADIAL_Club_Clem_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool DialClemDone;                                                                // 0x0340 (size: 0x1)
    class AActor* DronePos;                                                           // 0x0348 (size: 0x8)
    class AActor* BlazerPosition_LookAt;                                              // 0x0350 (size: 0x8)
    class ACameraActor* ClemArrest_CameraIntro02;                                     // 0x0358 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_Club_Clem(int32 EntryPoint);
}; // Size: 0x360

#endif
