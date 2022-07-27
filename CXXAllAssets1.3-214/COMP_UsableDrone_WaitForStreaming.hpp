#ifndef UE4SS_SDK_COMP_UsableDrone_WaitForStreaming_HPP
#define UE4SS_SDK_COMP_UsableDrone_WaitForStreaming_HPP

class UCOMP_UsableDrone_WaitForStreaming_C : public UDroneUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UUMG_Drone_Infinite_C* ScreenTimerWidget;                                   // 0x05A8 (size: 0x8)
    float ConsecutiveStreamingDoneTime;                                               // 0x05B0 (size: 0x4)
    float RequiredTimeWithoutStreaming;                                               // 0x05B4 (size: 0x4)
    float MinimumUseTime;                                                             // 0x05B8 (size: 0x4)
    float TotalTime;                                                                  // 0x05BC (size: 0x4)

    void _OnDroneUseStarted(class ADrone* _drone);
    void ReceiveTick(float DeltaSeconds);
    void _OnDroneUseEnded(class ADrone* _drone);
    void ExecuteUbergraph_COMP_UsableDrone_WaitForStreaming(int32 EntryPoint);
}; // Size: 0x5C0

#endif
