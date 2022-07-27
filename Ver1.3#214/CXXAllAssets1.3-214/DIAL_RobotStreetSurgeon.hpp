#ifndef UE4SS_SDK_DIAL_RobotStreetSurgeon_HPP
#define UE4SS_SDK_DIAL_RobotStreetSurgeon_HPP

class ADIAL_RobotStreetSurgeon_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0348 (size: 0x8)
    class AActor* Look At 1;                                                          // 0x0350 (size: 0x8)
    class AActor* Look At 2;                                                          // 0x0358 (size: 0x8)
    bool TalkedOnce;                                                                  // 0x0360 (size: 0x1)

    void OnDialogBegan();
    void BndEvt__DIAL_RobotStreetSurgeon_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_DIAL_RobotStreetSurgeon(int32 EntryPoint);
}; // Size: 0x361

#endif
