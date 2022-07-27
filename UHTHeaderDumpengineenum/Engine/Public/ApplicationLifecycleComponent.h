#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "ApplicationLifecycleComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UApplicationLifecycleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FApplicationLifetimeDelegate ApplicationWillDeactivateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FApplicationLifetimeDelegate ApplicationHasReactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FApplicationLifetimeDelegate ApplicationWillEnterBackgroundDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FApplicationLifetimeDelegate ApplicationHasEnteredForegroundDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FApplicationLifetimeDelegate ApplicationWillTerminateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FApplicationLifetimeDelegate ApplicationShouldUnloadResourcesDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FApplicationStartupArgumentsDelegate ApplicationReceivedStartupArgumentsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnTemperatureChangeDelegate OnTemperatureChangeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnLowPowerModeDelegate OnLowPowerModeDelegate;
    
    UApplicationLifecycleComponent();
};

