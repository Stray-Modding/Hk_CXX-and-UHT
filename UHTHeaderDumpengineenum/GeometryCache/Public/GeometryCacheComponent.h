#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "GeometryCacheComponent.generated.h"

class UGeometryCache;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCACHE_API UGeometryCacheComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGeometryCache* GeometryCache;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bLooping;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bExtrapolateFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StartTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MotionVectorScale;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumTracks;
    
    UPROPERTY(Transient, VisibleAnywhere)
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadOnly)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    bool bManualTick;
    
public:
    UGeometryCacheComponent();
    UFUNCTION(BlueprintCallable)
    void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetStartTimeOffset(const float NewStartTimeOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackSpeed(const float NewPlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionVectorScale(const float NewMotionVectorScale);
    
    UFUNCTION(BlueprintCallable)
    void SetLooping(const bool bNewLooping);
    
    UFUNCTION(BlueprintCallable)
    bool SetGeometryCache(UGeometryCache* NewGeomCache);
    
    UFUNCTION(BlueprintCallable)
    void SetExtrapolateFrames(const bool bNewExtrapolating);
    
    UFUNCTION(BlueprintCallable)
    void PlayReversedFromEnd();
    
    UFUNCTION(BlueprintCallable)
    void PlayReversed();
    
    UFUNCTION(BlueprintCallable)
    void PlayFromStart();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingReversed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExtrapolatingFrames() const;
    
    UFUNCTION(BlueprintPure)
    float GetStartTimeOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlaybackSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlaybackDirection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfFrames() const;
    
    UFUNCTION(BlueprintPure)
    float GetMotionVectorScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimationTime() const;
    
};

