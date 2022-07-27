#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameState -FallbackName=GameState
#include "MagicLeapSharedWorldSharedData.h"
#include "MagicLeapSharedWorldAlignmentTransforms.h"
#include "MagicLeapSharedWorldGameState.generated.h"

UCLASS()
class MAGICLEAPSHAREDWORLD_API AMagicLeapSharedWorldGameState : public AGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMagicLeapSharedWorldEvent);
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnReplicate_SharedWorldData)
    FMagicLeapSharedWorldSharedData SharedWorldData;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnReplicate_AlignmentTransforms)
    FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapSharedWorldEvent OnSharedWorldDataUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapSharedWorldEvent OnAlignmentTransformsUpdated;
    
    AMagicLeapSharedWorldGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnReplicate_SharedWorldData();
    
    UFUNCTION()
    void OnReplicate_AlignmentTransforms();
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FTransform CalculateXRCameraRootTransform() const;
    
};

