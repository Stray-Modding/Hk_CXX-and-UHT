#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "NavAgentSelector.h"
#include "NavigationSystemConfig.generated.h"

UCLASS(CollapseCategories, DefaultConfig, EditInlineNew)
class ENGINE_API UNavigationSystemConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftClassPath NavigationSystemClass;
    
    UPROPERTY(EditAnywhere)
    FNavAgentSelector SupportedAgentsMask;
    
    UPROPERTY(EditAnywhere)
    FName DefaultAgentName;
    
protected:
    UPROPERTY(VisibleAnywhere)
    uint8 bIsOverriden: 1;
    
public:
    UNavigationSystemConfig();
};

