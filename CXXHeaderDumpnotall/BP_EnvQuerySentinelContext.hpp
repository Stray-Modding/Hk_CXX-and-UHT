#ifndef UE4SS_SDK_BP_EnvQuerySentinelContext_HPP
#define UE4SS_SDK_BP_EnvQuerySentinelContext_HPP

class UBP_EnvQuerySentinelContext_C : public UEnvQueryContext_BlueprintBase
{

    void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, FVector& ResultingLocation);
};

#endif
