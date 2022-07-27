#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "LevelViewportInfo.generated.h"

USTRUCT()
struct ENGINE_API FLevelViewportInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector CamPosition;
    
    UPROPERTY()
    FRotator CamRotation;
    
    UPROPERTY()
    float CamOrthoZoom;
    
    UPROPERTY()
    bool CamUpdated;
    
    FLevelViewportInfo();
};

