#pragma once
#include "CoreMinimal.h"
#include "FieldNodeInt.h"
#include "UniformInteger.generated.h"

class UUniformInteger;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UUniformInteger : public UFieldNodeInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Magnitude;
    
    UUniformInteger();
    UFUNCTION(BlueprintPure)
    UUniformInteger* SetUniformInteger(int32 NewMagnitude);
    
};

