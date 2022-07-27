#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StreamingUnit.generated.h"

class UStreamingGroupDynamic;
class ULevelStreaming;

UCLASS()
class UStreamingUnit : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UStreamingGroupDynamic* m_streamingGroup;
    
    UPROPERTY()
    ULevelStreaming* m_levelStreaming;
    
public:
    UStreamingUnit();
private:
    UFUNCTION()
    void _OnLevelStreamingUnloaded();
    
    UFUNCTION()
    void _OnLevelStreamingLoaded();
    
};

