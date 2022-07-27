#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceCubeTexture.generated.h"

class UTextureCube;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTextureCube* Texture;
    
    UNiagaraDataInterfaceCubeTexture();
};

