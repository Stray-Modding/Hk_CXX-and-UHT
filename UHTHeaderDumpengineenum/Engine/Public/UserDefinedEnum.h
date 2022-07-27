#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Enum -FallbackName=Enum
#include "UserDefinedEnum.generated.h"

UCLASS()
class ENGINE_API UUserDefinedEnum : public UEnum {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, FText> DisplayNameMap;
    
    UUserDefinedEnum();
};

