#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=ClothSharedConfigCommon -FallbackName=ClothSharedConfigCommon
#include "ChaosClothSharedSimConfig.generated.h"

UCLASS()
class CHAOSCLOTH_API UChaosClothSharedSimConfig : public UClothSharedConfigCommon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 IterationCount;
    
    UPROPERTY(EditAnywhere)
    int32 SubdivisionCount;
    
    UPROPERTY()
    bool bUseLocalSpaceSimulation;
    
    UPROPERTY()
    bool bUseXPBDConstraints;
    
    UChaosClothSharedSimConfig();
};

