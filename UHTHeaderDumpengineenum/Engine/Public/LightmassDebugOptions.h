#pragma once
#include "CoreMinimal.h"
#include "LightmassDebugOptions.generated.h"

USTRUCT()
struct FLightmassDebugOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bDebugMode: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bStatsEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bGatherBSPSurfacesAcrossComponents: 1;
    
    UPROPERTY(EditAnywhere)
    float CoplanarTolerance;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseImmediateImport: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bImmediateProcessMappings: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSortMappings: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDumpBinaryFiles: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDebugMaterials: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPadMappings: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDebugPaddings: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOnlyCalcDebugTexelMappings: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseRandomColors: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bColorBordersGreen: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bColorByExecutionTime: 1;
    
    UPROPERTY(EditAnywhere)
    float ExecutionTimeDivisor;
    
    ENGINE_API FLightmassDebugOptions();
};

