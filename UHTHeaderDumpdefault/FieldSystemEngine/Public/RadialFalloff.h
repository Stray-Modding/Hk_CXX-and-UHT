#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldFalloffType -FallbackName=EFieldFalloffType
#include "RadialFalloff.generated.h"

class URadialFalloff;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API URadialFalloff : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldFalloffType> Falloff;
    
    URadialFalloff();
    UFUNCTION(BlueprintPure)
    URadialFalloff* SetRadialFalloff(float NewMagnitude, float NewMinRange, float NewMaxRange, float NewDefault, float NewRadius, FVector NewPosition, TEnumAsByte<EFieldFalloffType> NewFalloff);
    
};

