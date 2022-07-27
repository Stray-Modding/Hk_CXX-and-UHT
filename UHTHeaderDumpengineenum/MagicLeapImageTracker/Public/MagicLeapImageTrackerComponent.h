#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EMagicLeapImageTargetOrientation.h"
#include "MagicLeapSetImageTargetSucceededMultiDelegate.h"
#include "MagicLeapSetImageTargetFailedMultiDelegate.h"
#include "MagicLeapImageTargetFoundMultiDelegate.h"
#include "MagicLeapImageTargetUnreliableTrackingMultiDelegate.h"
#include "MagicLeapImageTargetLostMultiDelegate.h"
#include "MagicLeapImageTrackerComponent.generated.h"

class UTexture2D;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAPIMAGETRACKER_API UMagicLeapImageTrackerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* TargetImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LongerDimension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseUnreliablePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMagicLeapImageTargetOrientation AxisOrientation;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapSetImageTargetSucceededMulti OnSetImageTargetSucceeded;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapSetImageTargetFailedMulti OnSetImageTargetFailed;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapImageTargetFoundMulti OnImageTargetFound;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapImageTargetLostMulti OnImageTargetLost;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapImageTargetUnreliableTrackingMulti OnImageTargetUnreliableTracking;
    
    UMagicLeapImageTrackerComponent();
    UFUNCTION(BlueprintCallable)
    bool SetTargetAsync(UTexture2D* ImageTarget);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTargetAsync();
    
};

