#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBrushType -FallbackName=EBrushType
#include "HoudiniBrushInfo.generated.h"

class ABrush;

USTRUCT(BlueprintType)
struct FHoudiniBrushInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<ABrush> BrushActor;
    
    UPROPERTY()
    FTransform CachedTransform;
    
    UPROPERTY()
    FVector CachedOrigin;
    
    UPROPERTY()
    FVector CachedExtent;
    
    UPROPERTY()
    TEnumAsByte<EBrushType> CachedBrushType;
    
    UPROPERTY()
    uint64 CachedSurfaceHash;
    
    HOUDINIENGINERUNTIME_API FHoudiniBrushInfo();
};

