#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NavigationLinkBase.h"
#include "NavigationSegmentLink.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FNavigationSegmentLink : public FNavigationLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector LeftStart;
    
    UPROPERTY(EditAnywhere)
    FVector LeftEnd;
    
    UPROPERTY(EditAnywhere)
    FVector RightStart;
    
    UPROPERTY(EditAnywhere)
    FVector RightEnd;
    
    FNavigationSegmentLink();
};

