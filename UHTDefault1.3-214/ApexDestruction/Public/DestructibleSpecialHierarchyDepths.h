#pragma once
#include "CoreMinimal.h"
#include "DestructibleSpecialHierarchyDepths.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleSpecialHierarchyDepths {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SupportDepth;
    
    UPROPERTY(EditAnywhere)
    int32 MinimumFractureDepth;
    
    UPROPERTY(EditAnywhere)
    bool bEnableDebris;
    
    UPROPERTY(EditAnywhere)
    int32 DebrisDepth;
    
    UPROPERTY(EditAnywhere)
    int32 EssentialDepth;
    
    APEXDESTRUCTION_API FDestructibleSpecialHierarchyDepths();
};

