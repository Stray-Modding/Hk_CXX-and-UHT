#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "Timeline.h"
#include "ETimelineLengthMode.h"
#include "TimelineComponent.generated.h"

class UCurveVector;
class UCurveLinearColor;
class UCurveFloat;

UCLASS(BlueprintType, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTimelineComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_Timeline)
    FTimeline TheTimeline;
    
    UPROPERTY()
    uint8 bIgnoreTimeDilation: 1;
    
public:
    UTimelineComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVectorCurve(UCurveVector* NewVectorCurve, FName VectorTrackName);
    
    UFUNCTION(BlueprintCallable)
    void SetTimelineLengthMode(TEnumAsByte<ETimelineLengthMode> NewLengthMode);
    
    UFUNCTION(BlueprintCallable)
    void SetTimelineLength(float NewLength);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float NewRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackPosition(float newPosition, bool bFireEvents, bool bFireUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetNewTime(float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLooping(bool bNewLooping);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearColorCurve(UCurveLinearColor* NewLinearColorCurve, FName LinearColorTrackName);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatCurve(UCurveFloat* NewFloatCurve, FName FloatTrackName);
    
    UFUNCTION(BlueprintCallable)
    void ReverseFromEnd();
    
    UFUNCTION(BlueprintCallable)
    void Reverse();
    
    UFUNCTION(BlueprintCallable)
    void PlayFromStart();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION()
    void OnRep_Timeline();
    
    UFUNCTION(BlueprintPure)
    bool IsReversing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimelineLength() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlaybackPosition() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIgnoreTimeDilation() const;
    
};

