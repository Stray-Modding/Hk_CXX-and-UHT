#pragma once
#include "CoreMinimal.h"
#include "GameInstance.h"
#include "PlatformGameInstance.generated.h"

UCLASS(NonTransient)
class ENGINE_API UPlatformGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlatformDelegate ApplicationWillDeactivateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformDelegate ApplicationHasReactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformDelegate ApplicationWillEnterBackgroundDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformDelegate ApplicationHasEnteredForegroundDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformDelegate ApplicationWillTerminateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformDelegate ApplicationShouldUnloadResourcesDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformStartupArgumentsDelegate ApplicationReceivedStartupArgumentsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformRegisteredForRemoteNotificationsDelegate ApplicationRegisteredForRemoteNotificationsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformRegisteredForUserNotificationsDelegate ApplicationRegisteredForUserNotificationsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformFailedToRegisterForRemoteNotificationsDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformReceivedRemoteNotificationDelegate ApplicationReceivedRemoteNotificationDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformReceivedLocalNotificationDelegate ApplicationReceivedLocalNotificationDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlatformScreenOrientationChangedDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate;
    
    UPlatformGameInstance();
};

