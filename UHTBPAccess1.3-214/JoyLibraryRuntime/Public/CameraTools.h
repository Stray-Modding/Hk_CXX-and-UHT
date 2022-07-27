#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CameraTools.generated.h"

class AActor;
class UObject;
class APlayerController;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UCameraTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCameraTools();
    UFUNCTION(BlueprintCallable)
    static void RemovePlayerControllerHiddenPrimitiveComponent(APlayerController* _playerController, UPrimitiveComponent* _component);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePlayerControllerHiddenActor(APlayerController* _playerController, AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetCurrentViewLocation(UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerControllerHiddenPrimitiveComponent(APlayerController* _playerController, UPrimitiveComponent* _component);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerControllerHiddenActor(APlayerController* _playerController, AActor* _actor);
    
};

