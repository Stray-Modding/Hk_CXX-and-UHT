#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ESpawnOwnership.h"
#include "MovieSceneSpawnable.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneSpawnable {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FTransform SpawnTransform;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FName> Tags;
    
    UPROPERTY(EditAnywhere)
    bool bContinuouslyRespawn;
    
    UPROPERTY(EditAnywhere)
    bool bNetAddressableName;
    
    UPROPERTY(EditAnywhere)
    bool bEvaluateTracksWhenNotSpawned;
    
private:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    UObject* ObjectTemplate;
    
    UPROPERTY()
    TArray<FGuid> ChildPossessables;
    
    UPROPERTY()
    ESpawnOwnership Ownership;
    
public:
    UPROPERTY()
    FName LevelName;
    
    MOVIESCENE_API FMovieSceneSpawnable();
};

