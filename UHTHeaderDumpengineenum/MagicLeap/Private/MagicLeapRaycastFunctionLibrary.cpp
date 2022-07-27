#include "MagicLeapRaycastFunctionLibrary.h"

FMagicLeapRaycastQueryParams UMagicLeapRaycastFunctionLibrary::MakeRaycastQueryParams(FVector Position, FVector Direction, FVector UpVector, int32 Width, int32 Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32 UserData) {
    return FMagicLeapRaycastQueryParams{};
}

UMagicLeapRaycastFunctionLibrary::UMagicLeapRaycastFunctionLibrary() {
}

