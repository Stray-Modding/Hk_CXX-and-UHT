#pragma once
#include "CoreMinimal.h"
#include "ELuminComponentType.h"
#include "LuminComponentSubElement.h"
#include "LuminComponentElement.generated.h"

USTRUCT(BlueprintType)
struct FLuminComponentElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString VisibleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString ExecutableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    ELuminComponentType ComponentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FLuminComponentSubElement> ExtraComponentSubElements;
    
    LUMINRUNTIMESETTINGS_API FLuminComponentElement();
};

