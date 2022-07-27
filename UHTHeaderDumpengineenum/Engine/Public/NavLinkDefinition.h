#pragma once
#include "CoreMinimal.h"
#include "NavigationLink.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NavigationSegmentLink.h"
#include "NavLinkDefinition.generated.h"

UCLASS(Abstract)
class ENGINE_API UNavLinkDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FNavigationLink> Links;
    
    UPROPERTY(EditAnywhere)
    TArray<FNavigationSegmentLink> SegmentLinks;
    
    UNavLinkDefinition();
};

