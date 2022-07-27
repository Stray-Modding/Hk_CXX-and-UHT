#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneTakeSettings.generated.h"

UCLASS(BlueprintType, MinimalAPI, Config=EditorSettings)
class UMovieSceneTakeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString HoursName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString MinutesName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString SecondsName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString FramesName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString SubFramesName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString SlateName;
    
    UMovieSceneTakeSettings();
};

