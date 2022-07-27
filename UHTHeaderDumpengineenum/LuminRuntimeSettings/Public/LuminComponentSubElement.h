#pragma once
#include "CoreMinimal.h"
#include "ELuminComponentSubElementType.h"
#include "LuminComponentSubElement.generated.h"

USTRUCT(BlueprintType)
struct FLuminComponentSubElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    ELuminComponentSubElementType ElementType;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString Value;
    
    LUMINRUNTIMESETTINGS_API FLuminComponentSubElement();
};

