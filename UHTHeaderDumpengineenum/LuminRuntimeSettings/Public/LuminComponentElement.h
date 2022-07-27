#pragma once
#include "CoreMinimal.h"
#include "ELuminComponentType.h"
#include "LuminComponentSubElement.h"
#include "LuminComponentElement.generated.h"

USTRUCT(BlueprintType)
struct FLuminComponentElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString Name;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString VisibleName;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString ExecutableName;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    ELuminComponentType ComponentType;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TArray<FLuminComponentSubElement> ExtraComponentSubElements;
    
    LUMINRUNTIMESETTINGS_API FLuminComponentElement();
};

