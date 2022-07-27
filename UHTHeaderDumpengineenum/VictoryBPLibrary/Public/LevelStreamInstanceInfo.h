#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "LevelStreamInstanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FLevelStreamInstanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite)
    FName PackageNameToLoad;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bShouldBeLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bShouldBeVisible: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bShouldBlockOnLoad: 1;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LODIndex;
    
    VICTORYBPLIBRARY_API FLevelStreamInstanceInfo();
};

