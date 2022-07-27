#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "InputActionKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FInputActionKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bShift: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCtrl: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAlt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCmd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey Key;
    
    ENGINE_API FInputActionKeyMapping();
};

