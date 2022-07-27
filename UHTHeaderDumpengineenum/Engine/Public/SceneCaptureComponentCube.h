#pragma once
#include "CoreMinimal.h"
#include "SceneCaptureComponent.h"
#include "SceneCaptureComponentCube.generated.h"

class UTextureRenderTarget2D;
class UTextureRenderTargetCube;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USceneCaptureComponentCube : public USceneCaptureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTargetCube* TextureTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCaptureRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTargetCube* TextureTargetLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTargetCube* TextureTargetRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* TextureTargetODS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IPD;
    
    USceneCaptureComponentCube();
    UFUNCTION(BlueprintCallable)
    void CaptureScene();
    
};

