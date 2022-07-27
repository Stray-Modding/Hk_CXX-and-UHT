#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EWaveFunctionType -FallbackName=EWaveFunctionType
#include "FieldNodeFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldFalloffType -FallbackName=EFieldFalloffType
#include "WaveScalar.generated.h"

class UWaveScalar;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UWaveScalar : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Wavelength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Period;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EWaveFunctionType> Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldFalloffType> Falloff;
    
    UWaveScalar();
    UFUNCTION(BlueprintPure)
    UWaveScalar* SetWaveScalar(float NewMagnitude, FVector NewPosition, float NewWavelength, float NewPeriod, float Time, TEnumAsByte<EWaveFunctionType> NewFunction, TEnumAsByte<EFieldFalloffType> NewFalloff);
    
};

