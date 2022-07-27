#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AugmentedReality -ObjectName=ARSessionConfig -FallbackName=ARSessionConfig
//CROSS-MODULE INCLUDE V2: -ModuleName=MagicLeapPlanes -ObjectName=MagicLeapPlanesQuery -FallbackName=MagicLeapPlanesQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=MagicLeapPlanes -ObjectName=EMagicLeapPlaneQueryFlags -FallbackName=EMagicLeapPlaneQueryFlags
#include "LuminARSessionConfig.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPAR_API ULuminARSessionConfig : public UARSessionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapPlanesQuery PlanesQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlaneQueryResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPlaneArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArbitraryOrientationPlaneDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlaneSearchExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMagicLeapPlaneQueryFlags> PlaneQueryFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscardZeroExtentPlanes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultUseUnreliablePose;
    
    ULuminARSessionConfig();
};

