#ifndef UE4SS_SDK_BTD_Sentinel_GetTazerMode_HPP
#define UE4SS_SDK_BTD_Sentinel_GetTazerMode_HPP

class UBTD_Sentinel_GetTazerMode_C : public UBTDecorator_BlueprintBase
{
    class ABP_SentinelAI_C* SentinelAI;                                               // 0x00A0 (size: 0x8)
    ESentinelTazerMode TazerMode;                                                     // 0x00A8 (size: 0x1)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xA9

#endif
