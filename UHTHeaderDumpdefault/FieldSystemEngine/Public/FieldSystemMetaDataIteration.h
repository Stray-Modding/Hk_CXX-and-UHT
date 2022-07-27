#pragma once
#include "CoreMinimal.h"
#include "FieldSystemMetaData.h"
#include "FieldSystemMetaDataIteration.generated.h"

class UFieldSystemMetaDataIteration;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldSystemMetaDataIteration : public UFieldSystemMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Iterations;
    
    UFieldSystemMetaDataIteration();
    UFUNCTION(BlueprintPure)
    UFieldSystemMetaDataIteration* SetMetaDataIteration(int32 NewIterations);
    
};

