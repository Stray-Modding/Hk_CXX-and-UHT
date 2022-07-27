#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
#include "ReturnResultsTerminal.generated.h"

class UReturnResultsTerminal;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UReturnResultsTerminal : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UReturnResultsTerminal();
    UFUNCTION(BlueprintPure)
    UReturnResultsTerminal* SetReturnResultsTerminal();
    
};

