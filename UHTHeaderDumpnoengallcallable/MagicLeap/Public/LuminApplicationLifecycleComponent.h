#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ApplicationLifecycleComponent -FallbackName=ApplicationLifecycleComponent
#include "LuminApplicationLifecycleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAP_API ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuminApplicationLifetimeDelegate DeviceHasReactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuminApplicationLifetimeDelegate DeviceWillEnterRealityModeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuminApplicationLifetimeDelegate DeviceWillGoInStandbyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuminApplicationLifetimeFocusLostDelegate FocusLostDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLuminApplicationLifetimeDelegate FocusGainedDelegate;
    
    ULuminApplicationLifecycleComponent();
};

