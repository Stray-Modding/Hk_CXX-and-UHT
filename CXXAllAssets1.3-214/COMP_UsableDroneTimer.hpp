#ifndef UE4SS_SDK_COMP_UsableDroneTimer_HPP
#define UE4SS_SDK_COMP_UsableDroneTimer_HPP

class UCOMP_UsableDroneTimer_C : public UDroneUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    float UseTime;                                                                    // 0x05A8 (size: 0x4)
    class UUMG_Drone_Timer_C* ScreenTimerWidget;                                      // 0x05B0 (size: 0x8)

    void _OnDroneUseStarted(class ADrone* _drone);
    void OnSequenceEnded_Evend();
    void _OnBeforeUseDone(class ACatPawn* _cat);
    void ExecuteUbergraph_COMP_UsableDroneTimer(int32 EntryPoint);
}; // Size: 0x5B8

#endif
