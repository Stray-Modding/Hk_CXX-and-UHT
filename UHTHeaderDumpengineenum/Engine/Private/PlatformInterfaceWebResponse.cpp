#include "PlatformInterfaceWebResponse.h"

int32 UPlatformInterfaceWebResponse::GetNumHeaders() {
    return 0;
}

FString UPlatformInterfaceWebResponse::GetHeaderValue(const FString& HeaderName) {
    return TEXT("");
}

void UPlatformInterfaceWebResponse::GetHeader(int32 HeaderIndex, FString& Header, FString& Value) {
}

UPlatformInterfaceWebResponse::UPlatformInterfaceWebResponse() {
    this->ResponseCode = 0;
    this->Tag = 0;
}

