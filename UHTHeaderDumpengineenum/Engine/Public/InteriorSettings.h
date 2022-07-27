#pragma once
#include "CoreMinimal.h"
#include "InteriorSettings.generated.h"

USTRUCT(BlueprintType)
struct FInteriorSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsWorldSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExteriorVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExteriorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExteriorLPF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExteriorLPFTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteriorVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteriorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteriorLPF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteriorLPFTime;
    
    ENGINE_API FInteriorSettings();
};

