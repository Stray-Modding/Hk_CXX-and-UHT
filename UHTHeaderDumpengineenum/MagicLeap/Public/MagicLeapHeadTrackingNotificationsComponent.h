#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HeadMountedDisplay -ObjectName=VRNotificationsComponent -FallbackName=VRNotificationsComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=HeadMountedDisplay -ObjectName=VRNotificationsComponent -FallbackName=VRNotificationsComponent
#include "MagicLeapHeadTrackingNotificationsComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAP_API UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    UVRNotificationsComponent::FVRNotificationsDelegate OnHeadTrackingLost;
    
    UPROPERTY(BlueprintAssignable)
    UVRNotificationsComponent::FVRNotificationsDelegate OnHeadTrackingRecovered;
    
    UPROPERTY(BlueprintAssignable)
    UVRNotificationsComponent::FVRNotificationsDelegate OnHeadTrackingRecoveryFailed;
    
    UPROPERTY(BlueprintAssignable)
    UVRNotificationsComponent::FVRNotificationsDelegate OnHeadTrackingNewSessionStarted;
    
public:
    UMagicLeapHeadTrackingNotificationsComponent();
};

