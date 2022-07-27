#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BlueprintFunctionLibrary.h"
#include "SubsystemBlueprintLibrary.generated.h"

class UWorldSubsystem;
class UObject;
class ULocalPlayerSubsystem;
class APlayerController;
class UGameInstanceSubsystem;
class UEngineSubsystem;

UCLASS(BlueprintType)
class ENGINE_API USubsystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USubsystemBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static UWorldSubsystem* GetWorldSubsystem(UObject* ContextObject, TSubclassOf<UWorldSubsystem> Class);
    
    UFUNCTION(BlueprintPure)
    static ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(APlayerController* PlayerController, TSubclassOf<ULocalPlayerSubsystem> Class);
    
    UFUNCTION(BlueprintPure)
    static ULocalPlayerSubsystem* GetLocalPlayerSubsystem(UObject* ContextObject, TSubclassOf<ULocalPlayerSubsystem> Class);
    
    UFUNCTION(BlueprintPure)
    static UGameInstanceSubsystem* GetGameInstanceSubsystem(UObject* ContextObject, TSubclassOf<UGameInstanceSubsystem> Class);
    
    UFUNCTION(BlueprintPure)
    static UEngineSubsystem* GetEngineSubsystem(TSubclassOf<UEngineSubsystem> Class);
    
};

