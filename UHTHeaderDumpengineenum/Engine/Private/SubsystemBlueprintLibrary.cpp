#include "SubsystemBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class UWorldSubsystem;
class APlayerController;
class ULocalPlayerSubsystem;
class UGameInstanceSubsystem;
class UEngineSubsystem;

UWorldSubsystem* USubsystemBlueprintLibrary::GetWorldSubsystem(UObject* ContextObject, TSubclassOf<UWorldSubsystem> Class) {
    return NULL;
}

ULocalPlayerSubsystem* USubsystemBlueprintLibrary::GetLocalPlayerSubSystemFromPlayerController(APlayerController* PlayerController, TSubclassOf<ULocalPlayerSubsystem> Class) {
    return NULL;
}

ULocalPlayerSubsystem* USubsystemBlueprintLibrary::GetLocalPlayerSubsystem(UObject* ContextObject, TSubclassOf<ULocalPlayerSubsystem> Class) {
    return NULL;
}

UGameInstanceSubsystem* USubsystemBlueprintLibrary::GetGameInstanceSubsystem(UObject* ContextObject, TSubclassOf<UGameInstanceSubsystem> Class) {
    return NULL;
}

UEngineSubsystem* USubsystemBlueprintLibrary::GetEngineSubsystem(TSubclassOf<UEngineSubsystem> Class) {
    return NULL;
}

USubsystemBlueprintLibrary::USubsystemBlueprintLibrary() {
}

