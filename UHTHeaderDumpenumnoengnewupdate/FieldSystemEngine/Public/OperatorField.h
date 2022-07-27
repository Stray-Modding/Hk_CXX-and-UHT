#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldOperationType -FallbackName=EFieldOperationType
#include "OperatorField.generated.h"

class UOperatorField;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UOperatorField : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UFieldNodeBase* RightField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UFieldNodeBase* LeftField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldOperationType> Operation;
    
    UOperatorField();
    UFUNCTION(BlueprintPure)
    UOperatorField* SetOperatorField(float NewMagnitude, const UFieldNodeBase* NewLeftField, const UFieldNodeBase* NewRightField, TEnumAsByte<EFieldOperationType> NewOperation);
    
};

