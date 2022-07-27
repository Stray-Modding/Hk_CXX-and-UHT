#pragma once
#include "CoreMinimal.h"
#include "HitResult.h"
#include "PlayerController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DebugCameraController.generated.h"

class UPrimitiveComponent;
class UDrawFrustumComponent;
class AActor;
class UPlayer;

UCLASS()
class ENGINE_API ADebugCameraController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(GlobalConfig)
    uint8 bShowSelectedInfo: 1;
    
    UPROPERTY()
    uint8 bIsFrozenRendering: 1;
    
    UPROPERTY()
    uint8 bIsOrbitingSelectedActor: 1;
    
    UPROPERTY()
    uint8 bOrbitPivotUseCenter: 1;
    
    UPROPERTY()
    uint8 bEnableBufferVisualization: 1;
    
    UPROPERTY()
    uint8 bEnableBufferVisualizationFullMode: 1;
    
    UPROPERTY()
    uint8 bIsBufferVisualizationInputSetup: 1;
    
    UPROPERTY()
    uint8 bLastDisplayEnabled: 1;
    
    UPROPERTY(Export)
    UDrawFrustumComponent* DrawFrustum;
    
    UPROPERTY()
    AActor* SelectedActor;
    
    UPROPERTY(Export)
    UPrimitiveComponent* SelectedComponent;
    
    UPROPERTY()
    FHitResult SelectedHitPoint;
    
    UPROPERTY()
    APlayerController* OriginalControllerRef;
    
    UPROPERTY()
    UPlayer* OriginalPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpeedScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InitialMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InitialAccel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InitialDecel;
    
    ADebugCameraController();
    UFUNCTION(BlueprintCallable)
    void ToggleDisplay();
    
    UFUNCTION(Exec)
    void ShowDebugSelectedInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetPawnMovementSpeedScale(float NewSpeedScale);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnDeactivate(APlayerController* RestoredPC);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnActorSelected(AActor* NewSelectedActor, const FVector& SelectHitLocation, const FVector& SelectHitNormal, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnActivate(APlayerController* OriginalPC);
    
    UFUNCTION(BlueprintPure)
    AActor* GetSelectedActor() const;
    
};

