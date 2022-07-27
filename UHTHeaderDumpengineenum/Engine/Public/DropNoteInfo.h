#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "DropNoteInfo.generated.h"

USTRUCT(BlueprintType)
struct FDropNoteInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    FString Comment;
    
    ENGINE_API FDropNoteInfo();
};

