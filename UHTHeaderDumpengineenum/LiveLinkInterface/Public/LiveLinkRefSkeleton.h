#pragma once
#include "CoreMinimal.h"
#include "LiveLinkRefSkeleton.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkRefSkeleton {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> BoneNames;
    
    UPROPERTY()
    TArray<int32> BoneParents;
    
    LIVELINKINTERFACE_API FLiveLinkRefSkeleton();
};

