#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapIdentityKey.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapIdentityKey : uint8 {
    GivenName,
    FamilyName,
    Email,
    Bio,
    PhoneNumber,
    Avatar2D,
    Avatar3D,
    Unknown,
};

