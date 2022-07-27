#pragma once
#include "CoreMinimal.h"
#include "BakedStringCustomAttribute.h"
#include "BakedIntegerCustomAttribute.h"
#include "BakedFloatCustomAttribute.h"
#include "BakedCustomAttributePerBoneData.generated.h"

USTRUCT(BlueprintType)
struct FBakedCustomAttributePerBoneData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 BoneTreeIndex;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FBakedStringCustomAttribute> StringAttributes;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FBakedIntegerCustomAttribute> IntAttributes;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FBakedFloatCustomAttribute> FloatAttributes;
    
    ENGINE_API FBakedCustomAttributePerBoneData();
};

