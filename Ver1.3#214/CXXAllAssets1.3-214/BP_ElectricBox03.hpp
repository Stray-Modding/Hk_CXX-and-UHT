#ifndef UE4SS_SDK_BP_ElectricBox03_HPP
#define UE4SS_SDK_BP_ElectricBox03_HPP

class ABP_ElectricBox03_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0230 (size: 0x8)
    class UStaticMeshComponent* ElectricBox03;                                        // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_ElectricBox03(int32 EntryPoint);
}; // Size: 0x248

#endif
