#pragma once
#include "CoreMinimal.h"
#include "DataTable.h"
#include "CompositeDataTable.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UCompositeDataTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UDataTable*> ParentTables;
    
    UPROPERTY(Transient)
    TArray<UDataTable*> OldParentTables;
    
public:
    UCompositeDataTable();
};

