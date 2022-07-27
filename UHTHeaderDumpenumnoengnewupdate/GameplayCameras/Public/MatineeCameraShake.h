#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeBase -FallbackName=CameraShakeBase
#include "ROscillator.h"
#include "FOscillator.h"
#include "VOscillator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraShakePlaySpace -FallbackName=ECameraShakePlaySpace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MinimalViewInfo -FallbackName=MinimalViewInfo
#include "MatineeCameraShake.generated.h"

class UCameraAnimationSequence;
class APlayerCameraManager;
class UCameraAnim;
class UCameraAnimInst;
class USequenceCameraShakePattern;
class UCameraShakeSourceComponent;
class UMatineeCameraShake;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPLAYCAMERAS_API UMatineeCameraShake : public UCameraShakeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float OscillationDuration;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FROscillator RotOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVOscillator LocOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFOscillator FOVOscillation;
    
    UPROPERTY(EditAnywhere)
    float AnimPlayRate;
    
    UPROPERTY(EditAnywhere)
    float AnimScale;
    
    UPROPERTY(EditAnywhere)
    float AnimBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float AnimBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float RandomAnimSegmentDuration;
    
    UPROPERTY(EditAnywhere)
    UCameraAnim* Anim;
    
    UPROPERTY(EditAnywhere)
    UCameraAnimationSequence* AnimSequence;
    
    UPROPERTY(EditAnywhere)
    uint8 bRandomAnimSegment: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float OscillatorTimeRemaining;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UCameraAnimInst* AnimInst;
    
protected:
    UPROPERTY(Instanced)
    USequenceCameraShakePattern* SequenceShakePattern;
    
public:
    UMatineeCameraShake();
    UFUNCTION(BlueprintCallable)
    static UMatineeCameraShake* StartMatineeCameraShakeFromSource(APlayerCameraManager* PlayerCameraManager, TSubclassOf<UMatineeCameraShake> ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable)
    static UMatineeCameraShake* StartMatineeCameraShake(APlayerCameraManager* PlayerCameraManager, TSubclassOf<UMatineeCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveStopShake(bool bImmediately);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayShake(float Scale);
    
    UFUNCTION(BlueprintNativeEvent)
    bool ReceiveIsFinished() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);
    
};

