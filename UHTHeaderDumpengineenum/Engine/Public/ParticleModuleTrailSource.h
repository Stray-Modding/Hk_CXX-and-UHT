#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleTrailBase.h"
#include "EParticleSourceSelectionMethod.h"
#include "RawDistributionFloat.h"
#include "ETrail2SourceMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ParticleModuleTrailSource.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleTrailSource : public UParticleModuleTrailBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETrail2SourceMethod> SourceMethod;
    
    UPROPERTY(EditAnywhere)
    FName SourceName;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat SourceStrength;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockSourceStength: 1;
    
    UPROPERTY(EditAnywhere)
    int32 SourceOffsetCount;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FVector> SourceOffsetDefaults;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleSourceSelectionMethod> SelectionMethod;
    
    UPROPERTY(EditAnywhere)
    uint8 bInheritRotation: 1;
    
    UParticleModuleTrailSource();
};

