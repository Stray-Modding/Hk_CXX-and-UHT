#include "LiveLinkMessageBusFinder.h"

class UObject;
class ULiveLinkMessageBusFinder;

void ULiveLinkMessageBusFinder::GetAvailableProviders(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, TArray<FProviderPollResult>& AvailableProviders) {
}

ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::ConstructMessageBusFinder() {
    return NULL;
}

void ULiveLinkMessageBusFinder::ConnectToProvider(FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle) {
}

ULiveLinkMessageBusFinder::ULiveLinkMessageBusFinder() {
}

