#pragma once
#include "CoreMinimal.h"
#include "SceneCaptureComponent.h"
#include "ECameraProjectionMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
#include "ESceneCaptureCompositeMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PostProcessSettings.h"
#include "SceneCaptureComponent2D.generated.h"

class UTextureRenderTarget2D;
class UBlendableInterface;
class IBlendableInterface;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USceneCaptureComponent2D : public USceneCaptureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FOVAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OrthoWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* TextureTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESceneCaptureCompositeMode> CompositeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PostProcessBlendWeight;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_CustomNearClippingPlane: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CustomNearClippingPlane;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    bool bUseCustomProjectionMatrix;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    FMatrix CustomProjectionMatrix;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bEnableClipPlane;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector ClipPlaneBase;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector ClipPlaneNormal;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 bCameraCutThisFrame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bConsiderUnrenderedOpaquePixelAsFullyTranslucent: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bDisableFlipCopyGLES;
    
    USceneCaptureComponent2D();
    UFUNCTION(BlueprintCallable)
    void RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject);
    
    UFUNCTION(BlueprintCallable)
    void CaptureScene();
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);
    
};

