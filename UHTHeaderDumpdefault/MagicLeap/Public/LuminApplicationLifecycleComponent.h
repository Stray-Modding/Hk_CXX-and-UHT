#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ApplicationLifecycleComponent -FallbackName=ApplicationLifecycleComponent
#include "LuminApplicationLifecycleComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAP_API ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLuminApplicationLifetimeDelegate DeviceHasReactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FLuminApplicationLifetimeDelegate DeviceWillEnterRealityModeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FLuminApplicationLifetimeDelegate DeviceWillGoInStandbyDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FLuminApplicationLifetimeFocusLostDelegate FocusLostDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FLuminApplicationLifetimeDelegate FocusGainedDelegate;
    
    ULuminApplicationLifecycleComponent();
};

