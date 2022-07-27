#pragma once
#include "CoreMinimal.h"
#include "LevelStreaming.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "LevelStreamingDynamic.generated.h"

class ULevelStreamingDynamic;
class UObject;
class UWorld;

UCLASS(EditInlineNew)
class ENGINE_API ULevelStreamingDynamic : public ULevelStreaming {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bInitiallyLoaded: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bInitiallyVisible: 1;
    
    ULevelStreamingDynamic();
    UFUNCTION(BlueprintCallable)
    static ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, FVector Location, FRotator Rotation, bool& bOutSuccess, const FString& OptionalLevelNameOverride);
    
    UFUNCTION(BlueprintCallable)
    static ULevelStreamingDynamic* LoadLevelInstance(UObject* WorldContextObject, const FString& LevelName, FVector Location, FRotator Rotation, bool& bOutSuccess, const FString& OptionalLevelNameOverride);
    
};

