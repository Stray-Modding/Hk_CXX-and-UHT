#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "BreakableDelay.generated.h"

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UBreakableDelay : public UObject {
    GENERATED_BODY()
public:
    UBreakableDelay();
    UFUNCTION(BlueprintCallable)
    static bool InternalBreakBreakableDelay(UObject* _worldContextObject, int32 _uuid);
    
    UFUNCTION(BlueprintCallable)
    static int32 InternalBreakableDelay(UObject* _worldContextObject, float _duration, FLatentActionInfo _latentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void Delay(UObject* _worldContextObject, float _duration, FLatentActionInfo _latentInfo);
    
};

