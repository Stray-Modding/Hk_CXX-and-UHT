#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CameraTools.generated.h"

class APlayerController;
class UPrimitiveComponent;
class AActor;
class UObject;

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
