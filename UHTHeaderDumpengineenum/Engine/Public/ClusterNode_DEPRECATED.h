#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClusterNode_DEPRECATED.generated.h"

USTRUCT()
struct FClusterNode_DEPRECATED {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector BoundMin;
    
    UPROPERTY()
    int32 FirstChild;
    
    UPROPERTY()
    FVector BoundMax;
    
    UPROPERTY()
    int32 LastChild;
    
    UPROPERTY()
    int32 FirstInstance;
    
    UPROPERTY()
    int32 LastInstance;
    
    ENGINE_API FClusterNode_DEPRECATED();
};

