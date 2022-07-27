#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HeadMountedDisplay -ObjectName=VRNotificationsComponent -FallbackName=VRNotificationsComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=HeadMountedDisplay -ObjectName=VRNotificationsComponent -FallbackName=VRNotificationsComponent
#include "MagicLeapHeadTrackingNotificationsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAP_API UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVRNotificationsComponent::FVRNotificationsDelegate OnHeadTrackingLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVRNotificationsComponent::FVRNotificationsDelegate OnHeadTrackingRecovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVRNotificationsComponent::FVRNotificationsDelegate OnHeadTrackingRecoveryFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVRNotificationsComponent::FVRNotificationsDelegate OnHeadTrackingNewSessionStarted;
    
public:
    UMagicLeapHeadTrackingNotificationsComponent();
};

