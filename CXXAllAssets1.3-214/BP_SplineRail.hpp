#ifndef UE4SS_SDK_BP_SplineRail_HPP
#define UE4SS_SDK_BP_SplineRail_HPP

class ABP_SplineRail_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    bool Enabled;                                                                     // 0x0250 (size: 0x1)

    void UserConstructionScript();
    void SetRailEnabled(bool Enabled);
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void ExecuteUbergraph_BP_SplineRail(int32 EntryPoint);
}; // Size: 0x251

#endif
