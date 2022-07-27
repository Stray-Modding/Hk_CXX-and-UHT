#pragma once
#include "CoreMinimal.h"
#include "CustomAttribute.h"
#include "CustomAttributePerBoneData.generated.h"

USTRUCT()
struct ENGINE_API FCustomAttributePerBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 BoneTreeIndex;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FCustomAttribute> Attributes;
    
    FCustomAttributePerBoneData();
};

