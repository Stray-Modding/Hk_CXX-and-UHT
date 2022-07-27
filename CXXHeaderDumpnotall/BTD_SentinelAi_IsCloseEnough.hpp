#ifndef UE4SS_SDK_BTD_SentinelAi_IsCloseEnough_HPP
#define UE4SS_SDK_BTD_SentinelAi_IsCloseEnough_HPP

class UBTD_SentinelAi_IsCloseEnough_C : public UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector CloseEnoughFromThisLocationKeySelector;
    class ABP_SentinelAI_C* SentinelPawn;
    bool bUseHysteresis;
    FSmootherFloat HysteresisSmoother;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTD_SentinelAi_IsCloseEnough(int32 EntryPoint);
};

#endif
