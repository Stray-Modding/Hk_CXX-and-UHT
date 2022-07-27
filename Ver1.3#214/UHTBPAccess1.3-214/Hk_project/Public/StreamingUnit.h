#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StreamingUnit.generated.h"

class UStreamingGroupDynamic;
class ULevelStreaming;

UCLASS(Blueprintable)
class UStreamingUnit : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStreamingGroupDynamic* m_streamingGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* m_levelStreaming;
    
public:
    UStreamingUnit();
private:
    UFUNCTION(BlueprintCallable)
    void _OnLevelStreamingUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void _OnLevelStreamingLoaded();
    
};

