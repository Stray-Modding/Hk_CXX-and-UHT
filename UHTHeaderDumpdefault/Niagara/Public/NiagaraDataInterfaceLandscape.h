#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "ENDILandscape_SourceMode.h"
#include "NiagaraDataInterfaceLandscape.generated.h"

class AActor;
class UPhysicalMaterial;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* SourceLandscape;
    
    UPROPERTY(EditAnywhere)
    ENDILandscape_SourceMode SourceMode;
    
    UPROPERTY(EditAnywhere)
    TArray<UPhysicalMaterial*> PhysicalMaterials;
    
    UNiagaraDataInterfaceLandscape();
};

