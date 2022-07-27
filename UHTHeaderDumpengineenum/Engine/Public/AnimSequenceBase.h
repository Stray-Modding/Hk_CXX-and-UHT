#pragma once
#include "CoreMinimal.h"
#include "AnimationAsset.h"
#include "AnimNotifyEvent.h"
#include "RawCurveTracks.h"
#include "AnimSequenceBase.generated.h"

UCLASS(Abstract, BlueprintType)
class ENGINE_API UAnimSequenceBase : public UAnimationAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAnimNotifyEvent> Notifies;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, VisibleAnywhere)
    float SequenceLength;
    
    UPROPERTY(EditAnywhere)
    float RateScale;
    
    UPROPERTY()
    FRawCurveTracks RawCurveData;
    
    UAnimSequenceBase();
    UFUNCTION(BlueprintCallable)
    float GetPlayLength();
    
};

