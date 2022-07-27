#ifndef UE4SS_SDK_CACA_ClimB12_HPP
#define UE4SS_SDK_CACA_ClimB12_HPP

class ACACA_ClimB12_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0230 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Clim_06_pale;                                         // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Clims_vent06;                                         // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    float Random;                                                                     // 0x0258 (size: 0x4)
    bool On;                                                                          // 0x025C (size: 0x1)

    void ReceiveBeginPlay();
    void Timer();
    void LogicTrigger();
    void ExecuteUbergraph_CACA_ClimB12(int32 EntryPoint);
}; // Size: 0x25D

#endif
