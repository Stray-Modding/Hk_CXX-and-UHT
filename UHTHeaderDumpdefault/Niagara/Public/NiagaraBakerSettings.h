#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "NiagaraBakerTextureSettings.h"
#include "ENiagaraBakerViewMode.h"
#include "NiagaraBakerSettings.generated.h"

UCLASS()
class NIAGARA_API UNiagaraBakerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartSeconds;
    
    UPROPERTY(EditAnywhere)
    float DurationSeconds;
    
    UPROPERTY(EditAnywhere)
    int32 FramesPerSecond;
    
    UPROPERTY(EditAnywhere)
    uint8 bPreviewLooping: 1;
    
    UPROPERTY(EditAnywhere)
    FIntPoint FramesPerDimension;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraBakerTextureSettings> OutputTextures;
    
    UPROPERTY(EditAnywhere)
    ENiagaraBakerViewMode CameraViewportMode;
    
    UPROPERTY(EditAnywhere)
    FVector CameraViewportLocation[7];
    
    UPROPERTY(EditAnywhere)
    FRotator CameraViewportRotation[7];
    
    UPROPERTY(EditAnywhere)
    float CameraOrbitDistance;
    
    UPROPERTY(EditAnywhere)
    float CameraFOV;
    
    UPROPERTY(EditAnywhere)
    float CameraOrthoWidth;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseCameraAspectRatio: 1;
    
    UPROPERTY(EditAnywhere)
    float CameraAspectRatio;
    
    UPROPERTY(EditAnywhere)
    uint8 bRenderComponentOnly: 1;
    
    UNiagaraBakerSettings();
};

