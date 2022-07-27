#ifndef UE4SS_SDK_BTD_Sentinel_GetTazerMode_HPP
#define UE4SS_SDK_BTD_Sentinel_GetTazerMode_HPP

class UBTD_Sentinel_GetTazerMode_C : public UBTDecorator_BlueprintBase
{
    class ABP_SentinelAI_C* SentinelAI;
    ESentinelTazerMode TazerMode;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

#endif
