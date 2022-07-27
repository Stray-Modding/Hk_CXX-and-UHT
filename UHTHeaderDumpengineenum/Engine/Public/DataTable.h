#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DataTable.generated.h"

class UScriptStruct;

UCLASS(MinimalAPI)
class UDataTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UScriptStruct* RowStruct;
    
    UPROPERTY(EditAnywhere)
    uint8 bStripFromClientBuilds: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreExtraFields: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreMissingFields: 1;
    
    UPROPERTY(EditAnywhere)
    FString ImportKeyField;
    
    UDataTable();
};

