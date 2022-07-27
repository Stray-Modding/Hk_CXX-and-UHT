#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "PoseWatch.generated.h"

class UEdGraphNode;

UCLASS()
class ENGINE_API UPoseWatch : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UEdGraphNode* Node;
    
    UPROPERTY()
    FColor PoseWatchColour;
    
    UPoseWatch();
};

