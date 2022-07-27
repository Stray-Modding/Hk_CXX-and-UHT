#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ComponentSpacePose.generated.h"

USTRUCT(BlueprintType)
struct FComponentSpacePose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> Transforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Names;
    
    ENGINE_API FComponentSpacePose();
};

