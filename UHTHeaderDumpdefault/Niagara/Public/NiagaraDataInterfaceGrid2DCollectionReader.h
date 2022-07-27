#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGrid2D.h"
#include "NiagaraDataInterfaceGrid2DCollectionReader.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString EmitterName;
    
    UPROPERTY(EditAnywhere)
    FString DIName;
    
    UNiagaraDataInterfaceGrid2DCollectionReader();
};

