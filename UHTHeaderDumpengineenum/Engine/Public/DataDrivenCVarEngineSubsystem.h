#pragma once
#include "CoreMinimal.h"
#include "EngineSubsystem.h"
#include "DataDrivenCVarEngineSubsystem.generated.h"

UCLASS()
class ENGINE_API UDataDrivenCVarEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnDataDrivenCVarChanged OnDataDrivenCVarDelegate;
    
    UDataDrivenCVarEngineSubsystem();
};

