#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "NiagaraMatrix.generated.h"

USTRUCT()
struct FNiagaraMatrix {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector4 Row0;
    
    UPROPERTY(EditAnywhere)
    FVector4 Row1;
    
    UPROPERTY(EditAnywhere)
    FVector4 Row2;
    
    UPROPERTY(EditAnywhere)
    FVector4 Row3;
    
    NIAGARA_API FNiagaraMatrix();
};

