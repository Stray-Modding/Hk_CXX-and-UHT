#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NavRelevantComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "NavLinkCustomInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAgentSelector -FallbackName=NavAgentSelector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENavLinkDirection -FallbackName=ENavLinkDirection
#include "NavLinkCustomComponent.generated.h"

class UNavArea;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NAVIGATIONSYSTEM_API UNavLinkCustomComponent : public UNavRelevantComponent, public INavLinkCustomInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    uint32 NavLinkUserId;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> EnabledAreaClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> DisabledAreaClass;
    
    UPROPERTY(EditAnywhere)
    FNavAgentSelector SupportedAgents;
    
    UPROPERTY(EditAnywhere)
    FVector LinkRelativeStart;
    
    UPROPERTY(EditAnywhere)
    FVector LinkRelativeEnd;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENavLinkDirection::Type> LinkDirection;
    
    UPROPERTY(EditAnywhere)
    uint8 bLinkEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bNotifyWhenEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bNotifyWhenDisabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCreateBoxObstacle: 1;
    
    UPROPERTY(EditAnywhere)
    FVector ObstacleOffset;
    
    UPROPERTY(EditAnywhere)
    FVector ObstacleExtent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> ObstacleAreaClass;
    
    UPROPERTY(EditAnywhere)
    float BroadcastRadius;
    
    UPROPERTY(EditAnywhere)
    float BroadcastInterval;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> BroadcastChannel;
    
public:
    UNavLinkCustomComponent();
    
    // Fix for true pure virtual functions not being implemented
};

