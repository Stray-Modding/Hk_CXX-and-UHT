#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
#include "ActionDisplayKeyMappings.generated.h"

USTRUCT(BlueprintType)
struct FActionDisplayKeyMappings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> KeyMappings;
    
    HK_PROJECT_API FActionDisplayKeyMappings();
};

