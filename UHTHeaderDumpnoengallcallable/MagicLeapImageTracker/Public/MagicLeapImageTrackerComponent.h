#pragma once
#include "CoreMinimal.h"
#include "MagicLeapImageTargetFoundMultiDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EMagicLeapImageTargetOrientation.h"
#include "MagicLeapSetImageTargetSucceededMultiDelegate.h"
#include "MagicLeapSetImageTargetFailedMultiDelegate.h"
#include "MagicLeapImageTargetUnreliableTrackingMultiDelegate.h"
#include "MagicLeapImageTargetLostMultiDelegate.h"
#include "MagicLeapImageTrackerComponent.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAPIMAGETRACKER_API UMagicLeapImageTrackerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TargetImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongerDimension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseUnreliablePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapImageTargetOrientation AxisOrientation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapSetImageTargetSucceededMulti OnSetImageTargetSucceeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapSetImageTargetFailedMulti OnSetImageTargetFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapImageTargetFoundMulti OnImageTargetFound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapImageTargetLostMulti OnImageTargetLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapImageTargetUnreliableTrackingMulti OnImageTargetUnreliableTracking;
    
    UMagicLeapImageTrackerComponent();
    UFUNCTION(BlueprintCallable)
    bool SetTargetAsync(UTexture2D* ImageTarget);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTargetAsync();
    
};

