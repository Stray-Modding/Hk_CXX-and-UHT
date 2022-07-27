#include "LevelStreamingDynamic.h"

class UObject;
class UWorld;
class ULevelStreamingDynamic;

ULevelStreamingDynamic* ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, FVector Location, FRotator Rotation, bool& bOutSuccess, const FString& OptionalLevelNameOverride) {
    return NULL;
}

ULevelStreamingDynamic* ULevelStreamingDynamic::LoadLevelInstance(UObject* WorldContextObject, const FString& LevelName, FVector Location, FRotator Rotation, bool& bOutSuccess, const FString& OptionalLevelNameOverride) {
    return NULL;
}

ULevelStreamingDynamic::ULevelStreamingDynamic() {
    this->bInitiallyLoaded = false;
    this->bInitiallyVisible = false;
}

