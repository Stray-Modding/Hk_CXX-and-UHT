#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AssetEditorOrbitCameraPosition.generated.h"

USTRUCT()
struct FAssetEditorOrbitCameraPosition {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsSet;
    
    UPROPERTY()
    FVector CamOrbitPoint;
    
    UPROPERTY()
    FVector CamOrbitZoom;
    
    UPROPERTY()
    FRotator CamOrbitRotation;
    
    ENGINE_API FAssetEditorOrbitCameraPosition();
};

