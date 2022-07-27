#ifndef UE4SS_SDK_Dial_B12Flat_Tuto_4_LookElevator_HPP
#define UE4SS_SDK_Dial_B12Flat_Tuto_4_LookElevator_HPP

class ADial_B12Flat_Tuto_4_LookElevator_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_OrientCameraThirdPersonZone_C* CameraOrient;                            // 0x0340 (size: 0x8)
    class AActor* Pos_Look;                                                           // 0x0348 (size: 0x8)
    class AActor* Pos_Look_Elev;                                                      // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_B12Flat_Tuto_4_LookElevator(int32 EntryPoint);
}; // Size: 0x358

#endif
