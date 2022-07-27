#ifndef UE4SS_SDK_BP_EnvQueryZurgLeaderContext_HPP
#define UE4SS_SDK_BP_EnvQueryZurgLeaderContext_HPP

class UBP_EnvQueryZurgLeaderContext_C : public UEnvQueryContext_BlueprintBase
{

    void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, FVector& ResultingLocation);
};

#endif
