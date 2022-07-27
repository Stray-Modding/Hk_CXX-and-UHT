#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NavAgentSelector.h"
#include "ENavLinkDirection.h"
#include "NavigationLinkBase.generated.h"

class UNavAreaBase;

USTRUCT(BlueprintType)
struct ENGINE_API FNavigationLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LeftProjectHeight;
    
    UPROPERTY(EditAnywhere)
    float MaxFallDownLength;
    
    UPROPERTY(EditAnywhere)
    float SnapRadius;
    
    UPROPERTY(EditAnywhere)
    float SnapHeight;
    
    UPROPERTY(EditAnywhere)
    FNavAgentSelector SupportedAgents;
    
    UPROPERTY()
    uint8 bSupportsAgent0: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent1: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent2: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent3: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent4: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent5: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent6: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent7: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent8: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent9: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent10: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent11: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent12: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent13: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent14: 1;
    
    UPROPERTY()
    uint8 bSupportsAgent15: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ENavLinkDirection::Type> Direction;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseSnapHeight: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSnapToCheapestArea: 1;
    
    UPROPERTY()
    uint8 bCustomFlag0: 1;
    
    UPROPERTY()
    uint8 bCustomFlag1: 1;
    
    UPROPERTY()
    uint8 bCustomFlag2: 1;
    
    UPROPERTY()
    uint8 bCustomFlag3: 1;
    
    UPROPERTY()
    uint8 bCustomFlag4: 1;
    
    UPROPERTY()
    uint8 bCustomFlag5: 1;
    
    UPROPERTY()
    uint8 bCustomFlag6: 1;
    
    UPROPERTY()
    uint8 bCustomFlag7: 1;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavAreaBase> AreaClass;
    
public:
    FNavigationLinkBase();
};

