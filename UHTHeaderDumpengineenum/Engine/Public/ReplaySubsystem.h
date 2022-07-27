#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystem.h"
#include "ReplaySubsystem.generated.h"

UCLASS()
class ENGINE_API UReplaySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bLoadDefaultMapOnStop;
    
    UReplaySubsystem();
};

