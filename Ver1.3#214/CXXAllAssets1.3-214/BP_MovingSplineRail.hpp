#ifndef UE4SS_SDK_BP_MovingSplineRail_HPP
#define UE4SS_SDK_BP_MovingSplineRail_HPP

class ABP_MovingSplineRail_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UMovingActorComponent* MovingActor;                                         // 0x0230 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void ExecuteUbergraph_BP_MovingSplineRail(int32 EntryPoint);
}; // Size: 0x248

#endif
