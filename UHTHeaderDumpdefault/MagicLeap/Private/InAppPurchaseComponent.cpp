#include "InAppPurchaseComponent.h"

bool UInAppPurchaseComponent::TryPurchaseItemAsync(const FPurchaseItemDetails& ItemDetails) {
    return false;
}

bool UInAppPurchaseComponent::TryGetPurchaseHistoryAsync(int32 InNumPages) {
    return false;
}

bool UInAppPurchaseComponent::TryGetItemsDetailsAsync(const TArray<FString>& ItemIDs) {
    return false;
}

UInAppPurchaseComponent::UInAppPurchaseComponent() {
}

