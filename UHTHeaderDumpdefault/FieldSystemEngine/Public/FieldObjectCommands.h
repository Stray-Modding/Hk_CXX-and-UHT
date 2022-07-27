#pragma once
#include "CoreMinimal.h"
#include "FieldObjectCommands.generated.h"

class UFieldNodeBase;
class UFieldSystemMetaData;

USTRUCT(BlueprintType)
struct FIELDSYSTEMENGINE_API FFieldObjectCommands {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> TargetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UFieldNodeBase*> RootNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UFieldSystemMetaData*> MetaDatas;
    
    FFieldObjectCommands();
};

