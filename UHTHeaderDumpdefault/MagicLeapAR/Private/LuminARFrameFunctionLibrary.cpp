#include "LuminARFrameFunctionLibrary.h"

class UObject;

bool ULuminARFrameFunctionLibrary::LuminARLineTrace(UObject* WorldContextObject, const FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult>& OutHitResults) {
    return false;
}

ELuminARTrackingState ULuminARFrameFunctionLibrary::GetTrackingState() {
    return ELuminARTrackingState::Tracking;
}

ULuminARFrameFunctionLibrary::ULuminARFrameFunctionLibrary() {
}

