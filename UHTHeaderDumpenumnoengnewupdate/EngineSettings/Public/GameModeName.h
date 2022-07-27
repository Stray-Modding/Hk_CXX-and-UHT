#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "GameModeName.generated.h"

USTRUCT(BlueprintType)
struct FGameModeName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    FSoftClassPath GameMode;
    
    ENGINESETTINGS_API FGameModeName();
};

