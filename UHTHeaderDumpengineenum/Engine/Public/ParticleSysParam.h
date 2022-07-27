#pragma once
#include "CoreMinimal.h"
#include "EParticleSysParamType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ParticleSysParam.generated.h"

class AActor;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FParticleSysParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EParticleSysParamType> ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Scalar_Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Vector_Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* Material;
    
    ENGINE_API FParticleSysParam();
};

