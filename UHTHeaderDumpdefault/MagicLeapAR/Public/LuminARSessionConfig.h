#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AugmentedReality -ObjectName=ARSessionConfig -FallbackName=ARSessionConfig
//CROSS-MODULE INCLUDE V2: -ModuleName=MagicLeapPlanes -ObjectName=EMagicLeapPlaneQueryFlags -FallbackName=EMagicLeapPlaneQueryFlags
//CROSS-MODULE INCLUDE V2: -ModuleName=MagicLeapPlanes -ObjectName=MagicLeapPlanesQuery -FallbackName=MagicLeapPlanesQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LuminARSessionConfig.generated.h"

UCLASS()
class MAGICLEAPAR_API ULuminARSessionConfig : public UARSessionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMagicLeapPlanesQuery PlanesQuery;
    
    UPROPERTY()
    int32 MaxPlaneQueryResults;
    
    UPROPERTY()
    int32 MinPlaneArea;
    
    UPROPERTY(EditAnywhere)
    bool bArbitraryOrientationPlaneDetection;
    
    UPROPERTY()
    FVector PlaneSearchExtents;
    
    UPROPERTY()
    TArray<EMagicLeapPlaneQueryFlags> PlaneQueryFlags;
    
    UPROPERTY(EditAnywhere)
    bool bDiscardZeroExtentPlanes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDefaultUseUnreliablePose;
    
    ULuminARSessionConfig();
};

