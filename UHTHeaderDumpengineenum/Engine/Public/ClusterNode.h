#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClusterNode.generated.h"

USTRUCT()
struct FClusterNode {
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
    
    UPROPERTY()
    FVector MinInstanceScale;
    
    UPROPERTY()
    FVector MaxInstanceScale;
    
    ENGINE_API FClusterNode();
};

