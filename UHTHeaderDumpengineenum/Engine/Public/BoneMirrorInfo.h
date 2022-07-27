#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
#include "BoneMirrorInfo.generated.h"

USTRUCT(BlueprintType)
struct FBoneMirrorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SourceIndex;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> BoneFlipAxis;
    
    ENGINE_API FBoneMirrorInfo();
};

