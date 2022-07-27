#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Actor.h"
#include "TViewTarget.h"
#include "CameraCacheEntry.h"
#include "OnAudioFadeChangeSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PostProcessSettings.h"
#include "ECameraShakePlaySpace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PlayerCameraManager.generated.h"

class UCameraModifier;
class APlayerController;
class USceneComponent;
class AEmitterCameraLensEffectBase;
class UCameraModifier_CameraShake;
class UCameraAnimInst;
class ACameraActor;
class UCameraShakeBase;
class UCameraShakeSourceComponent;
class UCameraAnim;

UCLASS(NotPlaceable, Transient)
class ENGINE_API APlayerCameraManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    APlayerController* PCOwner;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultOrthoWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultAspectRatio;
    
    UPROPERTY(Transient)
    FCameraCacheEntry CameraCache;
    
    UPROPERTY(Transient)
    FCameraCacheEntry LastFrameCameraCache;
    
    UPROPERTY(Transient)
    FTViewTarget ViewTarget;
    
    UPROPERTY(Transient)
    FTViewTarget PendingViewTarget;
    
private:
    UPROPERTY(Transient)
    FCameraCacheEntry CameraCachePrivate;
    
    UPROPERTY(Transient)
    FCameraCacheEntry LastFrameCameraCachePrivate;
    
protected:
    UPROPERTY(Transient)
    TArray<UCameraModifier*> ModifierList;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UCameraModifier>> DefaultModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FreeCamDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FreeCamOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ViewTargetOffset;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnAudioFadeChangeSignature OnAudioFadeChangeEvent;
    
protected:
    UPROPERTY(Transient)
    TArray<AEmitterCameraLensEffectBase*> CameraLensEffects;
    
    UPROPERTY(Transient)
    UCameraModifier_CameraShake* CachedCameraShakeMod;
    
    UPROPERTY(Transient)
    UCameraAnimInst* AnimInstPool[8];
    
    UPROPERTY(Transient)
    TArray<FPostProcessSettings> PostProcessBlendCache;
    
public:
    UPROPERTY(Transient)
    TArray<UCameraAnimInst*> ActiveAnims;
    
protected:
    UPROPERTY(Transient)
    TArray<UCameraAnimInst*> FreeAnims;
    
    UPROPERTY(Transient)
    ACameraActor* AnimCameraActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsOrthographic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDefaultConstrainAspectRatio: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bClientSimulatingViewTarget: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUseClientSideCameraUpdates: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bGameCameraCutThisFrame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewYawMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewYawMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewRollMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewRollMax;
    
private:
    UPROPERTY(Config)
    float ServerUpdateCameraTimeout;
    
public:
    APlayerCameraManager();
protected:
    UFUNCTION()
    void SwapPendingViewTargetWhenUsingClientSideCameraUpdates();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopCameraShake(UCameraShakeBase* ShakeInstance, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StopCameraFade();
    
    UFUNCTION(BlueprintCallable)
    void StopCameraAnimInst(UCameraAnimInst* AnimInst, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void StopAllInstancesOfCameraShakeFromSource(TSubclassOf<UCameraShakeBase> Shake, UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StopAllInstancesOfCameraShake(TSubclassOf<UCameraShakeBase> Shake, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StopAllInstancesOfCameraAnim(UCameraAnim* Anim, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCameraShakes(bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCameraAnims(bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    UCameraShakeBase* StartCameraShakeFromSource(TSubclassOf<UCameraShakeBase> ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable)
    UCameraShakeBase* StartCameraShake(TSubclassOf<UCameraShakeBase> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable)
    void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
    
    UFUNCTION(BlueprintCallable)
    void SetManualCameraFade(float InFadeAmount, FLinearColor Color, bool bInFadeAudio);
    
    UFUNCTION(BlueprintCallable)
    void SetGameCameraCutThisFrame();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCameraModifier(UCameraModifier* ModifierToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCameraLensEffect(AEmitterCameraLensEffectBase* Emitter);
    
    UFUNCTION(BlueprintCallable)
    UCameraAnimInst* PlayCameraAnim(UCameraAnim* Anim, float Rate, float Scale, float blendInTime, float blendOutTime, bool bLoop, bool bRandomStartTime, float Duration, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent)
    void PhotographyCameraModify(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent)
    void OnPhotographySessionStart();
    
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent)
    void OnPhotographySessionEnd();
    
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent)
    void OnPhotographyMultiPartCaptureStart();
    
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent)
    void OnPhotographyMultiPartCaptureEnd();
    
    UFUNCTION(BlueprintPure)
    APlayerController* GetOwningPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    float GetFOVAngle() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetCameraRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCameraLocation() const;
    
    UFUNCTION(BlueprintCallable)
    UCameraModifier* FindCameraModifierByClass(TSubclassOf<UCameraModifier> ModifierClass);
    
    UFUNCTION(BlueprintCallable)
    void ClearCameraLensEffects();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    bool BlueprintUpdateCamera(AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV);
    
    UFUNCTION(BlueprintCallable)
    UCameraModifier* AddNewCameraModifier(TSubclassOf<UCameraModifier> ModifierClass);
    
    UFUNCTION(BlueprintCallable)
    AEmitterCameraLensEffectBase* AddCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass);
    
};

