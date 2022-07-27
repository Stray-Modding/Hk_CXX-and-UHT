#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Node.generated.h"

USTRUCT(BlueprintType)
struct FNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY(VisibleAnywhere)
    FName ParentName;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY(EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(EditAnywhere)
    bool bAdvanced;
    
    ENGINE_API FNode();
};

