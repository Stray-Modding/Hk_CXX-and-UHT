#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraDataInterfaceArrayFloat3.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> FloatData;
    
    UNiagaraDataInterfaceArrayFloat3();
};

