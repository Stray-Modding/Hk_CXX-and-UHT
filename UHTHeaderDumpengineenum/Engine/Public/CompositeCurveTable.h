#pragma once
#include "CoreMinimal.h"
#include "CurveTable.h"
#include "CompositeCurveTable.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UCompositeCurveTable : public UCurveTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UCurveTable*> ParentTables;
    
    UPROPERTY(Transient)
    TArray<UCurveTable*> OldParentTables;
    
public:
    UCompositeCurveTable();
};

