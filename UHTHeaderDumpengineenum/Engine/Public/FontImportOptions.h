#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FontImportOptionsData.h"
#include "FontImportOptions.generated.h"

UCLASS(MinimalAPI, Transient)
class UFontImportOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFontImportOptionsData Data;
    
    UFontImportOptions();
};

