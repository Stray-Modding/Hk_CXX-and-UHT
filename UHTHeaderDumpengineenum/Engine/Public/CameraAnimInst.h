#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ECameraShakePlaySpace.h"
#include "CameraAnimInst.generated.h"

class UInterpTrackMove;
class UCameraAnim;
class UInterpTrackInstMove;
class UInterpGroupInst;

UCLASS(BlueprintType, NotPlaceable, Transient)
class ENGINE_API UCameraAnimInst : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCameraAnim* CamAnim;
    
private:
    UPROPERTY(Instanced)
    UInterpGroupInst* InterpGroupInst;
    
public:
    UPROPERTY(BlueprintReadWrite)
    float PlayRate;
    
    UPROPERTY(Transient)
    UInterpTrackMove* MoveTrack;
    
    UPROPERTY(Transient)
    UInterpTrackInstMove* MoveInst;
    
    UPROPERTY()
    ECameraShakePlaySpace PlaySpace;
    
    UCameraAnimInst();
    UFUNCTION(BlueprintCallable)
    void Stop(bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void SetScale(float NewDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetDuration(float NewDuration);
    
};

