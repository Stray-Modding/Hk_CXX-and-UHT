#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "NiagaraDataInterfaceRWBase.h"
#include "ESetResolutionMethod.h"
#include "NiagaraDataInterfaceGrid3D.generated.h"

UCLASS(Abstract, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIntVector NumCells;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float CellSize;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 NumCellsMaxAxis;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ESetResolutionMethod SetResolutionMethod;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector WorldBBoxSize;
    
    UNiagaraDataInterfaceGrid3D();
};

