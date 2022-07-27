#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SubsurfaceProfileStruct.generated.h"

USTRUCT(BlueprintType)
struct FSubsurfaceProfileStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SurfaceAlbedo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor MeanFreePathColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MeanFreePathDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WorldUnitScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableBurley;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScatterRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SubsurfaceColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FalloffColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BoundaryColorBleed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExtinctionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NormalScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScatteringDistribution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IOR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Roughness0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Roughness1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LobeMix;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor TransmissionTintColor;
    
    ENGINE_API FSubsurfaceProfileStruct();
};

