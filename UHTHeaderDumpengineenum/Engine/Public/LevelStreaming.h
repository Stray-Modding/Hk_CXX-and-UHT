#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LevelStreamingLoadedStatusDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LevelStreamingVisibilityStatusDelegate.h"
#include "LevelStreaming.generated.h"

class UWorld;
class ALevelStreamingVolume;
class ULevel;
class ALevelScriptActor;
class ULevelStreaming;

UCLASS(Abstract, BlueprintType, EditInlineNew, Within=World)
class ENGINE_API ULevelStreaming : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> WorldAsset;
    
public:
    UPROPERTY()
    FName PackageNameToLoad;
    
    UPROPERTY()
    TArray<FName> LODPackageNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform LevelTransform;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 LevelLODIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StreamingPriority;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bShouldBeVisible: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    uint8 bShouldBeLoaded: 1;
    
public:
    UPROPERTY()
    uint8 bLocked: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsStatic: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bShouldBlockOnLoad: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bShouldBlockOnUnload: 1;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 bDisableDistanceStreaming: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bDrawOnLevelStatusMap: 1;
    
    UPROPERTY(EditAnywhere)
    FLinearColor LevelColor;
    
    UPROPERTY(EditAnywhere)
    TArray<ALevelStreamingVolume*> EditorStreamingVolumes;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MinTimeBetweenVolumeUnloadRequests;
    
    UPROPERTY(BlueprintAssignable)
    FLevelStreamingLoadedStatus OnLevelLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FLevelStreamingLoadedStatus OnLevelUnloaded;
    
    UPROPERTY(BlueprintAssignable)
    FLevelStreamingVisibilityStatus OnLevelShown;
    
    UPROPERTY(BlueprintAssignable)
    FLevelStreamingVisibilityStatus OnLevelHidden;
    
private:
    UPROPERTY(Transient)
    ULevel* LoadedLevel;
    
    UPROPERTY(Transient)
    ULevel* PendingUnloadLevel;
    
public:
    ULevelStreaming();
    UFUNCTION(BlueprintPure)
    bool ShouldBeLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldBeVisible(bool bInShouldBeVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldBeLoaded(bool bInShouldBeLoaded);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 NewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelLODIndex(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetIsRequestingUnloadAndRemoval(bool bInIsRequestingUnloadAndRemoval);
    
    UFUNCTION(BlueprintPure)
    bool IsStreamingStatePending() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLevelVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLevelLoaded() const;
    
    UFUNCTION(BlueprintPure)
    FName GetWorldAssetPackageFName() const;
    
    UFUNCTION(BlueprintPure)
    ULevel* GetLoadedLevel() const;
    
    UFUNCTION(BlueprintPure)
    ALevelScriptActor* GetLevelScriptActor();
    
    UFUNCTION(BlueprintPure)
    bool GetIsRequestingUnloadAndRemoval() const;
    
    UFUNCTION(BlueprintCallable)
    ULevelStreaming* CreateInstance(const FString& UniqueInstanceName);
    
};

