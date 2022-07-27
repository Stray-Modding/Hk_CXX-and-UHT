#ifndef UE4SS_SDK_BP_Ventilo_HPP
#define UE4SS_SDK_BP_Ventilo_HPP

class ABP_Ventilo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0230 (size: 0x8)
    class UStaticMeshComponent* ventilo_01_pales;                                     // 0x0238 (size: 0x8)
    class UStaticMeshComponent* ventilo_01;                                           // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    bool On;                                                                          // 0x0250 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void ExecuteUbergraph_BP_Ventilo(int32 EntryPoint);
}; // Size: 0x251

#endif
