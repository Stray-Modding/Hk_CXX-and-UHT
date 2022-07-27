#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnARTransformUpdatedDelegate.h"
#include "EARTrackingState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "OnARTrackingStateChangedDelegate.h"
#include "ARPin.generated.h"

class UARTrackedGeometry;
class USceneComponent;
class UWorld;

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARPin : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UARTrackedGeometry* TrackedGeometry;
    
    UPROPERTY(Export)
    USceneComponent* PinnedComponent;
    
    UPROPERTY()
    FTransform LocalToTrackingTransform;
    
    UPROPERTY()
    FTransform LocalToAlignedTrackingTransform;
    
    UPROPERTY()
    EARTrackingState TrackingState;
    
    UPROPERTY(BlueprintAssignable)
    FOnARTrackingStateChanged OnARTrackingStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnARTransformUpdated OnARTransformUpdated;
    
public:
    UARPin();
    UFUNCTION(BlueprintPure)
    EARTrackingState GetTrackingState() const;
    
    UFUNCTION(BlueprintPure)
    UARTrackedGeometry* GetTrackedGeometry() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetPinnedComponent() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalToWorldTransform() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalToTrackingTransform() const;
    
    UFUNCTION(BlueprintPure)
    FName GetDebugName() const;
    
    UFUNCTION()
    void DebugDraw(UWorld* World, const FLinearColor& Color, float Scale, float PersistForSeconds) const;
    
};

