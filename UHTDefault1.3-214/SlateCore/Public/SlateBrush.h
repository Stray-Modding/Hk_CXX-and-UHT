#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Margin.h"
#include "SlateColor.h"
#include "ESlateBrushDrawType.h"
#include "ESlateBrushMirrorType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
#include "ESlateBrushTileType.h"
#include "ESlateBrushImageType.h"
#include "SlateBrush.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SLATECORE_API FSlateBrush {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor TintColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ResourceObject;
    
protected:
    UPROPERTY()
    FName ResourceName;
    
    UPROPERTY()
    FBox2D UVRegion;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESlateBrushDrawType::Type> DrawAs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESlateBrushTileType::Type> Tiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESlateBrushMirrorType::Type> Mirroring;
    
    UPROPERTY()
    TEnumAsByte<ESlateBrushImageType::Type> ImageType;
    
protected:
    UPROPERTY()
    uint8 bIsDynamicallyLoaded: 1;
    
    UPROPERTY()
    uint8 bHasUObject: 1;
    
public:
    FSlateBrush();
};

