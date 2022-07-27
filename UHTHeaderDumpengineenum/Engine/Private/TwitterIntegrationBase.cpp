#include "TwitterIntegrationBase.h"

bool UTwitterIntegrationBase::TwitterRequest(const FString& URL, const TArray<FString>& ParamKeysAndValues, TEnumAsByte<ETwitterRequestMethod> RequestMethod, int32 AccountIndex) {
    return false;
}

bool UTwitterIntegrationBase::ShowTweetUI(const FString& InitialMessage, const FString& URL, const FString& Picture) {
    return false;
}

void UTwitterIntegrationBase::Init() {
}

int32 UTwitterIntegrationBase::GetNumAccounts() {
    return 0;
}

FString UTwitterIntegrationBase::GetAccountName(int32 AccountIndex) {
    return TEXT("");
}

bool UTwitterIntegrationBase::CanShowTweetUI() {
    return false;
}

bool UTwitterIntegrationBase::AuthorizeAccounts() {
    return false;
}

UTwitterIntegrationBase::UTwitterIntegrationBase() {
}

