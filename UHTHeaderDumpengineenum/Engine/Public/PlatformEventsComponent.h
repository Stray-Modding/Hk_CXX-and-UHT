#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "PlatformEventsComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPlatformEventsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlatformEventDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FPlatformEventDelegate PlatformChangedToLaptopModeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformEventDelegate PlatformChangedToTabletModeDelegate;
    
    UPlatformEventsComponent();
    UFUNCTION(BlueprintCallable)
    bool SupportsConvertibleLaptops();
    
    UFUNCTION(BlueprintCallable)
    bool IsInTabletMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsInLaptopMode();
    
};

