#pragma once
#include "CoreMinimal.h"
#include "InterpolatorCompleteOutputPinDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "InterpolatorTickOutputPinDelegate.h"
#include "JoyInterpolator.generated.h"

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UJoyInterpolator : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpolatorTickOutputPin Tick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpolatorCompleteOutputPin Complete;
    
public:
    UJoyInterpolator();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
};

