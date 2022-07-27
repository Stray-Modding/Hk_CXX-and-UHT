#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "GrainTableEntry.h"
#include "MotoSynthSource.generated.h"

UCLASS(BlueprintType)
class MOTOSYNTH_API UMotoSynthSource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bConvertTo8Bit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DownSampleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve RPMCurve;
    
protected:
    UPROPERTY()
    TArray<float> SourceData;
    
    UPROPERTY()
    TArray<int16> SourceDataPCM;
    
    UPROPERTY()
    int32 SourceSampleRate;
    
    UPROPERTY()
    TArray<FGrainTableEntry> GrainTable;
    
public:
    UMotoSynthSource();
};

