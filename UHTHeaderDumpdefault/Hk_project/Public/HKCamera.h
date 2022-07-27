#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HKCamera.generated.h"

UCLASS()
class HK_PROJECT_API AHKCamera : public AActor {
    GENERATED_BODY()
public:
    AHKCamera();
    UFUNCTION(BlueprintCallable)
    void SetCameraInput(FVector2D _input);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnCameraFocusLost(float _blendTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCameraFocus(float _blendTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCameraButtonReleased();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCameraButtonPressed();
    
    UFUNCTION(BlueprintPure)
    float GetLookSensitivity() const;
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetCollisionPosition() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetCameraInput() const;
    
};

