#ifndef UE4SS_SDK_CACA_AirGrid_HPP
#define UE4SS_SDK_CACA_AirGrid_HPP

class ACACA_AirGrid_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Air_Grid_A;                                           // 0x0230 (size: 0x8)
    class USceneComponent* Pivot;                                                     // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    bool StartOpen;                                                                   // 0x0248 (size: 0x1)
    float EndRotation;                                                                // 0x024C (size: 0x4)
    class ABP_SplineRail_C* Path;                                                     // 0x0250 (size: 0x8)
    class ALight* Light;                                                              // 0x0258 (size: 0x8)
    float oldIntensity;                                                               // 0x0260 (size: 0x4)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA4DBA25E1();
    void Tick_6246EF4646E19036986D72BA4DBA25E1(float Ratio);
    void ReceiveBeginPlay();
    void LogicTrigger();
    void ExecuteUbergraph_CACA_AirGrid(int32 EntryPoint);
}; // Size: 0x264

#endif
