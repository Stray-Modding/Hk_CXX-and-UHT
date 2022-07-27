#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapIdentityError.generated.h"

UENUM()
enum class EMagicLeapIdentityError : uint8 {
    Ok,
    InvalidParam,
    AllocFailed,
    PrivilegeDenied,
    FailedToConnectToLocalService,
    FailedToConnectToCloudService,
    CloudAuthentication,
    InvalidInformationFromCloud,
    NotLoggedIn,
    ExpiredCredentials,
    FailedToGetUserProfile,
    Unauthorized,
    CertificateError,
    RejectedByCloud,
    AlreadyLoggedIn,
    ModifyIsNotSupported,
    NetworkError,
    UnspecifiedFailure,
};

