#include "BlueprintPlatformLibrary.h"

int32 UBlueprintPlatformLibrary::ScheduleLocalNotificationFromNow(int32 inSecondsFromNow, const FText& Title, const FText& Body, const FText& Action, const FString& ActivationEvent) {
    return 0;
}

void UBlueprintPlatformLibrary::ScheduleLocalNotificationBadgeFromNow(int32 inSecondsFromNow, const FString& ActivationEvent) {
}

int32 UBlueprintPlatformLibrary::ScheduleLocalNotificationBadgeAtTime(const FDateTime& FireDateTime, bool LocalTime, const FString& ActivationEvent) {
    return 0;
}

int32 UBlueprintPlatformLibrary::ScheduleLocalNotificationAtTime(const FDateTime& FireDateTime, bool LocalTime, const FText& Title, const FText& Body, const FText& Action, const FString& ActivationEvent) {
    return 0;
}

void UBlueprintPlatformLibrary::GetLaunchNotification(bool& NotificationLaunchedApp, FString& ActivationEvent, int32& FireDate) {
}

TEnumAsByte<EScreenOrientation::Type> UBlueprintPlatformLibrary::GetDeviceOrientation() {
    return EScreenOrientation::Unknown;
}

void UBlueprintPlatformLibrary::ClearAllLocalNotifications() {
}

void UBlueprintPlatformLibrary::CancelLocalNotificationById(int32 NotificationId) {
}

void UBlueprintPlatformLibrary::CancelLocalNotification(const FString& ActivationEvent) {
}

UBlueprintPlatformLibrary::UBlueprintPlatformLibrary() {
}

