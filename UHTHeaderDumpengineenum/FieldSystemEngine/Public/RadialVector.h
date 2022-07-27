#pragma once
#include "CoreMinimal.h"
#include "FieldNodeVector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RadialVector.generated.h"

class URadialVector;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API URadialVector : public UFieldNodeVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    URadialVector();
    UFUNCTION(BlueprintPure)
    URadialVector* SetRadialVector(float NewMagnitude, FVector NewPosition);
    
};

