#pragma once
#include "CoreMinimal.h"
#include "ELuminComponentSubElementType.h"
#include "LuminComponentSubElement.generated.h"

USTRUCT(BlueprintType)
struct FLuminComponentSubElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    ELuminComponentSubElementType ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString Value;
    
    LUMINRUNTIMESETTINGS_API FLuminComponentSubElement();
};

