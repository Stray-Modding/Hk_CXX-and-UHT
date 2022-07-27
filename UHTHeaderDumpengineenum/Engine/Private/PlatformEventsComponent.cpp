#include "PlatformEventsComponent.h"

bool UPlatformEventsComponent::SupportsConvertibleLaptops() {
    return false;
}

bool UPlatformEventsComponent::IsInTabletMode() {
    return false;
}

bool UPlatformEventsComponent::IsInLaptopMode() {
    return false;
}

UPlatformEventsComponent::UPlatformEventsComponent() {
}

