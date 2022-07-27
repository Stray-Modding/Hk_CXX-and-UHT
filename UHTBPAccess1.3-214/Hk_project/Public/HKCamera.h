#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "HKCamera.generated.h"

UCLASS(Blueprintable)
class HK_PROJECT_API AHKCamera : public AActor {
    GENERATED_BODY()
public:
    AHKCamera();
    UFUNCTION(BlueprintCallable)
    void SetCameraInput(FVector2D _input);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCameraFocusLost(float _blendTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCameraFocus(float _blendTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCameraButtonReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCameraButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookSensitivity() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCollisionPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCameraInput() const;
    
};

