#pragma once
#include "CoreMinimal.h"
#include "FieldNodeFloat.h"
#include "ToFloatField.generated.h"

class UFieldNodeInt;
class UToFloatField;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UToFloatField : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UFieldNodeInt* IntField;
    
    UToFloatField();
    UFUNCTION(BlueprintPure)
    UToFloatField* SetToFloatField(const UFieldNodeInt* IntegerField);
    
};

