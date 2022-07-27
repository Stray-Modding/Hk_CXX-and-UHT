#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldFalloffType -FallbackName=EFieldFalloffType
#include "PlaneFalloff.generated.h"

class UPlaneFalloff;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UPlaneFalloff : public UFieldNodeFloat {
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
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldFalloffType> Falloff;
    
    UPlaneFalloff();
    UFUNCTION(BlueprintPure)
    UPlaneFalloff* SetPlaneFalloff(float NewMagnitude, float NewMinRange, float NewMaxRange, float NewDefault, float NewDistance, FVector NewPosition, FVector NewNormal, TEnumAsByte<EFieldFalloffType> NewFalloff);
    
};

