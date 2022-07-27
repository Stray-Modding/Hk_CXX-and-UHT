#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "UVMapSettings.generated.h"

USTRUCT(BlueprintType)
struct STATICMESHDESCRIPTION_API FUVMapSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UVTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Scale;
    
    FUVMapSettings();
};

