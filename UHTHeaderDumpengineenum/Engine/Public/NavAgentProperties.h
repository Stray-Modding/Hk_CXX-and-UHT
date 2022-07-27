#pragma once
#include "CoreMinimal.h"
#include "MovementProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "NavAgentProperties.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FNavAgentProperties : public FMovementProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgentRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgentHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgentStepHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavWalkingSearchHeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftClassPath PreferredNavData;
    
    FNavAgentProperties();
};

