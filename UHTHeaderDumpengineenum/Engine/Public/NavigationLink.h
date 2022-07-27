#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NavigationLinkBase.h"
#include "NavigationLink.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FNavigationLink : public FNavigationLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Right;
    
    FNavigationLink();
};

