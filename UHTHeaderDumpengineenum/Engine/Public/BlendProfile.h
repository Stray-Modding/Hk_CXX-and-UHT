#pragma once
#include "CoreMinimal.h"
#include "BlendProfileBoneEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlendProfile.generated.h"

class USkeleton;

UCLASS(Within=Skeleton)
class ENGINE_API UBlendProfile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    USkeleton* OwningSkeleton;
    
    UPROPERTY()
    TArray<FBlendProfileBoneEntry> ProfileEntries;
    
    UBlendProfile();
};

