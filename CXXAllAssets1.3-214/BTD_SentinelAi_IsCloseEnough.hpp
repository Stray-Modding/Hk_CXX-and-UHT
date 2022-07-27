#ifndef UE4SS_SDK_BTD_SentinelAi_IsCloseEnough_HPP
#define UE4SS_SDK_BTD_SentinelAi_IsCloseEnough_HPP

class UBTD_SentinelAi_IsCloseEnough_C : public UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    FBlackboardKeySelector CloseEnoughFromThisLocationKeySelector;                    // 0x00A8 (size: 0x28)
    class ABP_SentinelAI_C* SentinelPawn;                                             // 0x00D0 (size: 0x8)
    bool bUseHysteresis;                                                              // 0x00D8 (size: 0x1)
    FSmootherFloat HysteresisSmoother;                                                // 0x00DC (size: 0xC)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTD_SentinelAi_IsCloseEnough(int32 EntryPoint);
}; // Size: 0xE8

#endif
