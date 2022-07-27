#ifndef UE4SS_SDK_BP_SplineRail_HPP
#define UE4SS_SDK_BP_SplineRail_HPP

class ABP_SplineRail_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStreamingComponent* Streaming;
    class USaveComponent* Save;
    class USplineRailComponent* SplineRail;
    class USceneComponent* DefaultSceneRoot;
    bool Enabled;

    void UserConstructionScript();
    void SetRailEnabled(bool Enabled);
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void ExecuteUbergraph_BP_SplineRail(int32 EntryPoint);
};

#endif
