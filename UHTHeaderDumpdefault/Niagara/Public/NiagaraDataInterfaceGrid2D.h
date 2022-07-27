#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceRWBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "NiagaraDataInterfaceGrid2D.generated.h"

UCLASS(Abstract, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 NumCellsX;
    
    UPROPERTY(EditAnywhere)
    int32 NumCellsY;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 NumCellsMaxAxis;
    
    UPROPERTY(EditAnywhere)
    int32 NumAttributes;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool SetGridFromMaxAxis;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector2D WorldBBoxSize;
    
    UNiagaraDataInterfaceGrid2D();
};

