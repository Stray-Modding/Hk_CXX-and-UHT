#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "OnMatineeEventDelegate.h"
#include "InterpGroupActorInfo.h"
#include "CameraCutInfo.h"
#include "MatineeActor.generated.h"

class UInterpGroupInst;
class UInterpData;

UCLASS()
class ENGINE_API AMatineeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    UInterpData* MatineeData;
    
    UPROPERTY()
    FName MatineeControllerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPlayOnLevelLoad: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bForceStartPos: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ForceStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    uint8 bLooping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRewindOnPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bNoResetOnRewind: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRewindIfAlreadyPlaying: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bDisableRadioFilter: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bClientSideOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSkipUpdateIfNotVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsSkippable: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 PreferredSplitScreenNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDisableMovementInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDisableLookAtInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bHidePlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bHideHud: 1;
    
    UPROPERTY(Replicated)
    TArray<FInterpGroupActorInfo> GroupActorInfos;
    
    UPROPERTY(Transient)
    uint8 bShouldShowGore: 1;
    
    UPROPERTY(Transient)
    TArray<UInterpGroupInst*> GroupInst;
    
    UPROPERTY(Transient)
    TArray<FCameraCutInfo> CameraCuts;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleAnywhere)
    uint8 bIsPlaying: 1;
    
    UPROPERTY(Replicated)
    uint8 bReversePlayback: 1;
    
    UPROPERTY(Replicated, Transient)
    uint8 bPaused: 1;
    
    UPROPERTY(Replicated, Transient)
    uint8 bPendingStop: 1;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    float InterpPosition;
    
private:
    UPROPERTY(Replicated)
    uint8 ReplicationForceIsPlaying;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnMatineeEvent OnPlay;
    
    UPROPERTY(BlueprintAssignable)
    FOnMatineeEvent OnStop;
    
    UPROPERTY(BlueprintAssignable)
    FOnMatineeEvent OnPause;
    
    AMatineeActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(float newPosition, bool bJump);
    
    UFUNCTION(BlueprintCallable)
    void SetLoopingState(bool bNewLooping);
    
    UFUNCTION(BlueprintCallable)
    void Reverse();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void EnableGroupByName(const FString& GroupName, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ChangePlaybackDirection();
    
};

