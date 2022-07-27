#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LocationBoneSocketInfo.generated.h"

USTRUCT(BlueprintType)
struct FLocationBoneSocketInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneSocketName;
    
    UPROPERTY(EditAnywhere)
    FVector Offset;
    
    ENGINE_API FLocationBoneSocketInfo();
};

