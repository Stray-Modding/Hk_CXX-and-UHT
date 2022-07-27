#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMovieSceneCaptureProtocolState.h"
#include "MovieSceneCaptureProtocolBase.generated.h"

UCLASS(Abstract, BlueprintType, PerObjectConfig, Config=EditorPerProjectUserSettings)
class MOVIESCENECAPTURE_API UMovieSceneCaptureProtocolBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    EMovieSceneCaptureProtocolState State;
    
public:
    UMovieSceneCaptureProtocolBase();
    UFUNCTION(BlueprintPure)
    bool IsCapturing() const;
    
    UFUNCTION(BlueprintPure)
    EMovieSceneCaptureProtocolState GetState() const;
    
};

