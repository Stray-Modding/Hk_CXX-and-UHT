#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CameraTools.generated.h"

class UObject;
class APlayerController;
class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UCameraTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCameraTools();
    UFUNCTION(BlueprintCallable)
    static void RemovePlayerControllerHiddenPrimitiveComponent(APlayerController* _playerController, UPrimitiveComponent* _component);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePlayerControllerHiddenActor(APlayerController* _playerController, AActor* _actor);
    
    UFUNCTION(BlueprintPure)
    static FVector GetCurrentViewLocation(UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerControllerHiddenPrimitiveComponent(APlayerController* _playerController, UPrimitiveComponent* _component);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerControllerHiddenActor(APlayerController* _playerController, AActor* _actor);
    
};

