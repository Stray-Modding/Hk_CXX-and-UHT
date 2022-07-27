#include "MagicLeapARPinFunctionLibrary.h"

void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapContentBindingFoundDelegate(const FMagicLeapContentBindingFoundDelegate& Delegate) {
}

void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapARPinUpdatedDelegate(const FMagicLeapARPinUpdatedDelegate& Delegate) {
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::SetGlobalQueryFilter(const FMagicLeapARPinQuery& InGlobalFilter) {
    return EMagicLeapPassableWorldError::None;
}

void UMagicLeapARPinFunctionLibrary::SetContentBindingSaveGameUserIndex(int32 UserIndex) {
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::QueryARPins(const FMagicLeapARPinQuery& Query, TArray<FGuid>& Pins) {
    return EMagicLeapPassableWorldError::None;
}

bool UMagicLeapARPinFunctionLibrary::ParseStringToARPinId(const FString& PinIdString, FGuid& ARPinId) {
    return false;
}

bool UMagicLeapARPinFunctionLibrary::IsTrackerValid() {
    return false;
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetNumAvailableARPins(int32& Count) {
    return EMagicLeapPassableWorldError::None;
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetGlobalQueryFilter(FMagicLeapARPinQuery& CurrentGlobalFilter) {
    return EMagicLeapPassableWorldError::None;
}

int32 UMagicLeapARPinFunctionLibrary::GetContentBindingSaveGameUserIndex() {
    return 0;
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetClosestARPin(const FVector& SearchPoint, FGuid& PinId) {
    return EMagicLeapPassableWorldError::None;
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetAvailableARPins(int32 NumRequested, TArray<FGuid>& Pins) {
    return EMagicLeapPassableWorldError::None;
}

FString UMagicLeapARPinFunctionLibrary::GetARPinStateToString(const FMagicLeapARPinState& State) {
    return TEXT("");
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetARPinState(const FGuid& PinId, FMagicLeapARPinState& State) {
    return EMagicLeapPassableWorldError::None;
}

bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation_TrackingSpace(const FGuid& PinId, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment) {
    return false;
}

bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation(const FGuid& PinId, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment) {
    return false;
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::DestroyTracker() {
    return EMagicLeapPassableWorldError::None;
}

EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::CreateTracker() {
    return EMagicLeapPassableWorldError::None;
}

void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapContentBindingFoundDelegate(const FMagicLeapContentBindingFoundDelegate& Delegate) {
}

void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapARPinUpdatedDelegate(const FMagicLeapARPinUpdatedDelegate& Delegate) {
}

FString UMagicLeapARPinFunctionLibrary::ARPinIdToString(const FGuid& ARPinId) {
    return TEXT("");
}

UMagicLeapARPinFunctionLibrary::UMagicLeapARPinFunctionLibrary() {
}

