#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "VRNotificationsComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HEADMOUNTEDDISPLAY_API UVRNotificationsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsDelegate HMDTrackingInitializedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsDelegate HMDRecenteredDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsDelegate HMDLostDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsDelegate HMDReconnectedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsDelegate HMDConnectCanceledDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsDelegate HMDPutOnHeadDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsDelegate HMDRemovedFromHeadDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FVRNotificationsDelegate VRControllerRecenteredDelegate;
    
    UVRNotificationsComponent();
};

