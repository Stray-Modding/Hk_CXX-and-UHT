#ifndef UE4SS_SDK_BP_WaterPlateform_MovingSpline_HPP
#define UE4SS_SDK_BP_WaterPlateform_MovingSpline_HPP

class ABP_WaterPlateform_MovingSpline_C : public ABP_WaterPlateform_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class ABP_MovingSplineRail_C* Moving Spline Rail;                                 // 0x02D0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void CatIsOnRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void CatExitRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void Attach Spline Rail();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_WaterPlateform_MovingSpline(int32 EntryPoint);
}; // Size: 0x2D8

#endif
