#include "MagicLeapPlanesFunctionLibrary.h"

class AActor;

void UMagicLeapPlanesFunctionLibrary::ReorderPlaneFlags(const TArray<EMagicLeapPlaneQueryFlags>& InPriority, const TArray<EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>& OutReorderedFlags) {
}

bool UMagicLeapPlanesFunctionLibrary::RemovePersistentQuery(FGuid Handle) {
    return false;
}

void UMagicLeapPlanesFunctionLibrary::RemoveFlagsNotInQuery(const TArray<EMagicLeapPlaneQueryFlags>& InQueryFlags, const TArray<EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<EMagicLeapPlaneQueryFlags>& OutFlags) {
}

bool UMagicLeapPlanesFunctionLibrary::PlanesQueryBeginAsync(const FMagicLeapPlanesQuery& Query, const FMagicLeapPlanesResultDelegate& ResultDelegate) {
    return false;
}

bool UMagicLeapPlanesFunctionLibrary::PlanesPersistentQueryBeginAsync(const FMagicLeapPlanesQuery& Query, const FGuid& Handle, const FMagicLeapPersistentPlanesResultDelegate& ResultDelegate) {
    return false;
}

bool UMagicLeapPlanesFunctionLibrary::IsTrackerValid() {
    return false;
}

FTransform UMagicLeapPlanesFunctionLibrary::GetContentScale(const AActor* ContentActor, const FMagicLeapPlaneResult& PlaneResult) {
    return FTransform{};
}

bool UMagicLeapPlanesFunctionLibrary::DestroyTracker() {
    return false;
}

bool UMagicLeapPlanesFunctionLibrary::CreateTracker() {
    return false;
}

FGuid UMagicLeapPlanesFunctionLibrary::AddPersistentQuery(EMagicLeapPlaneQueryType PersistentQueryType) {
    return FGuid{};
}

UMagicLeapPlanesFunctionLibrary::UMagicLeapPlanesFunctionLibrary() {
}

