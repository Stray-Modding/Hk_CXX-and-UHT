#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PostProcessSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "CameraModifier.generated.h"

class APlayerCameraManager;
class AActor;

UCLASS(Blueprintable)
class ENGINE_API UCameraModifier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bDebug: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bExclusive: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 Priority;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCameraManager* CameraOwner;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AlphaInTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AlphaOutTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Alpha;
    
public:
    UCameraModifier();
    UFUNCTION(BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetViewTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableModifier();
    
    UFUNCTION(BlueprintCallable)
    void DisableModifier(bool bImmediate);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV);
    
};

