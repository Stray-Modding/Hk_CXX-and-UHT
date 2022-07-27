#ifndef UE4SS_SDK_DIAL_RobotStreetFood_Client_HPP
#define UE4SS_SDK_DIAL_RobotStreetFood_Client_HPP

class ADIAL_RobotStreetFood_Client_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* server;                                                             // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_RobotStreetFood_Client(int32 EntryPoint);
}; // Size: 0x348

#endif
