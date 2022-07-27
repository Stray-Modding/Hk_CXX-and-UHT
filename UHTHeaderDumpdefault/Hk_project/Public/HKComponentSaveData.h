#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HKComponentSaveData.generated.h"

USTRUCT(BlueprintType)
struct FHKComponentSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform RelativeTransform;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TArray<uint8> Data;
    
    UPROPERTY()
    bool NoAttachment;
    
    HK_PROJECT_API FHKComponentSaveData();
};

