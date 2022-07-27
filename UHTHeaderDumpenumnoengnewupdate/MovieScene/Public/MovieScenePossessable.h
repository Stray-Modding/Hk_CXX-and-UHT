#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieScenePossessable.generated.h"

USTRUCT(BlueprintType)
struct FMovieScenePossessable {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FName> Tags;
    
private:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    UClass* PossessedObjectClass;
    
    UPROPERTY()
    FGuid ParentGuid;
    
public:
    MOVIESCENE_API FMovieScenePossessable();
};

