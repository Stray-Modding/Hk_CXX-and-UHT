#pragma once
#include "CoreMinimal.h"
#include "EBoneTranslationRetargetingMode.h"
#include "BoneNode.generated.h"

USTRUCT(BlueprintType)
struct FBoneNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    int32 ParentIndex;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneTranslationRetargetingMode::Type> TranslationRetargetingMode;
    
    ENGINE_API FBoneNode();
};

