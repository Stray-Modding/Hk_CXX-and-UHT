#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "LevelSequenceBindingReference.generated.h"

USTRUCT(BlueprintType)
struct FLevelSequenceBindingReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString PackageName;
    
    UPROPERTY()
    FSoftObjectPath ExternalObjectPath;
    
    UPROPERTY()
    FString ObjectPath;
    
public:
    LEVELSEQUENCE_API FLevelSequenceBindingReference();
};

