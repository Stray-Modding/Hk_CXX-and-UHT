#pragma once
#include "CoreMinimal.h"
#include "PostProcessSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ECameraProjectionMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "MinimalViewInfo.generated.h"

USTRUCT(BlueprintType)
struct FMinimalViewInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FOV;
    
    UPROPERTY(Transient)
    float DesiredFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OrthoWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float OrthoNearClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float OrthoFarClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bConstrainAspectRatio: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bUseFieldOfViewForLOD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionMode;
    
    UPROPERTY(BlueprintReadWrite)
    float PostProcessBlendWeight;
    
    UPROPERTY(BlueprintReadWrite)
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly)
    FVector2D OffCenterProjectionOffset;
    
    ENGINE_API FMinimalViewInfo();
};

