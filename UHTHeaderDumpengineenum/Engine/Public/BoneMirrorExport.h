#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
#include "BoneMirrorExport.generated.h"

USTRUCT()
struct FBoneMirrorExport {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    FName SourceBoneName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> BoneFlipAxis;
    
    ENGINE_API FBoneMirrorExport();
};

