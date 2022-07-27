#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterface2DArrayTexture.generated.h"

class UTexture2DArray;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2DArray* Texture;
    
    UNiagaraDataInterface2DArrayTexture();
};

