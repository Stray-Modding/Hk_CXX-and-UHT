#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=BaseMediaSource -FallbackName=BaseMediaSource
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "ImgMediaSource.generated.h"

class AActor;

UCLASS(EditInlineNew)
class IMGMEDIA_API UImgMediaSource : public UBaseMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsPathRelativeToProjectRoot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FFrameRate FrameRateOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FString ProxyOverride;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDirectoryPath SequencePath;
    
public:
    UImgMediaSource();
    UFUNCTION(BlueprintCallable)
    void SetSequencePath(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    void SetMipLevelDistance(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTargetObject(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGlobalCamera(AActor* InActor);
    
    UFUNCTION(BlueprintPure)
    FString GetSequencePath() const;
    
    UFUNCTION(BlueprintPure)
    void GetProxies(TArray<FString>& OutProxies) const;
    
    UFUNCTION(BlueprintCallable)
    void AddTargetObject(AActor* InActor, float Width);
    
    UFUNCTION(BlueprintCallable)
    void AddGlobalCamera(AActor* InActor);
    
};

