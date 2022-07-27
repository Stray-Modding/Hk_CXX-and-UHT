#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MorphTarget.generated.h"

class USkeletalMesh;

UCLASS(MinimalAPI)
class UMorphTarget : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable)
    USkeletalMesh* BaseSkelMesh;
    
    UMorphTarget();
};

