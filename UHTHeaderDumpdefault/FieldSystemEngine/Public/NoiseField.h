#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "NoiseField.generated.h"

class UNoiseField;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UNoiseField : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UNoiseField();
    UFUNCTION(BlueprintPure)
    UNoiseField* SetNoiseField(float NewMinRange, float NewMaxRange, FTransform NewTransform);
    
};

