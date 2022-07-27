#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FieldNodeVector.h"
#include "UniformVector.generated.h"

class UUniformVector;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UUniformVector : public UFieldNodeVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Direction;
    
    UUniformVector();
    UFUNCTION(BlueprintPure)
    UUniformVector* SetUniformVector(float NewMagnitude, FVector NewDirection);
    
};

