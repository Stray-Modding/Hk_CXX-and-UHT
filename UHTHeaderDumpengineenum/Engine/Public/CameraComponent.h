#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "MinimalViewInfo.h"
#include "ECameraProjectionMode.h"
#include "PostProcessSettings.h"
#include "CameraComponent.generated.h"

class UBlendableInterface;
class IBlendableInterface;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UCameraComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float OrthoWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float OrthoNearClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float OrthoFarClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    uint8 bConstrainAspectRatio: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    uint8 bUseFieldOfViewForLOD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bLockToHmd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUsePawnControlRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PostProcessBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPostProcessSettings PostProcessSettings;
    
    UCameraComponent();
    UFUNCTION(BlueprintCallable)
    void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectionMode(TEnumAsByte<ECameraProjectionMode::Type> InProjectionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessBlendWeight(float InPostProcessBlendWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetOrthoWidth(float InOrthoWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetOrthoNearClipPlane(float InOrthoNearClipPlane);
    
    UFUNCTION(BlueprintCallable)
    void SetOrthoFarClipPlane(float InOrthoFarClipPlane);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldOfView(float InFieldOfView);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintAspectRatio(bool bInConstrainAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetAspectRatio(float InAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCameraMeshHiddenChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);
    
};

