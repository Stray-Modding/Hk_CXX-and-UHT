#ifndef UE4SS_SDK_COMP_UsableDroneTimer_HPP
#define UE4SS_SDK_COMP_UsableDroneTimer_HPP

class UCOMP_UsableDroneTimer_C : public UDroneUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float UseTime;
    class UUMG_Drone_Timer_C* ScreenTimerWidget;

    void _OnDroneUseStarted(class ADrone* _drone);
    void OnSequenceEnded_Evend();
    void _OnBeforeUseDone(class ACatPawn* _cat);
    void ExecuteUbergraph_COMP_UsableDroneTimer(int32 EntryPoint);
};

#endif
