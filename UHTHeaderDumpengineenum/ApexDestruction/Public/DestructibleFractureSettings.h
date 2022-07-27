#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DestructibleChunkParameters.h"
#include "FractureMaterial.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DestructibleFractureSettings.generated.h"

class UMaterialInterface;

UCLASS(MinimalAPI)
class UDestructibleFractureSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 CellSiteCount;
    
    UPROPERTY(EditAnywhere, Transient)
    FFractureMaterial FractureMaterialDesc;
    
    UPROPERTY(EditAnywhere)
    int32 RandomSeed;
    
    UPROPERTY()
    TArray<FVector> VoronoiSites;
    
    UPROPERTY()
    int32 OriginalSubmeshCount;
    
    UPROPERTY()
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY()
    TArray<FDestructibleChunkParameters> ChunkParameters;
    
    UDestructibleFractureSettings();
};

