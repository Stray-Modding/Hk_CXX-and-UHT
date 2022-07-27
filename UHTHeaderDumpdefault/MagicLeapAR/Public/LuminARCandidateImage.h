#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MagicLeapImageTracker -ObjectName=EMagicLeapImageTargetOrientation -FallbackName=EMagicLeapImageTargetOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=AugmentedReality -ObjectName=ARCandidateImage -FallbackName=ARCandidateImage
#include "LuminARCandidateImage.generated.h"

UCLASS()
class MAGICLEAPAR_API ULuminARCandidateImage : public UARCandidateImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bUseUnreliablePose;
    
    UPROPERTY(EditAnywhere)
    bool bImageIsStationary;
    
    UPROPERTY(EditAnywhere)
    EMagicLeapImageTargetOrientation AxisOrientation;
    
public:
    ULuminARCandidateImage();
    UFUNCTION(BlueprintPure)
    bool GetUseUnreliablePose() const;
    
    UFUNCTION(BlueprintPure)
    bool GetImageIsStationary() const;
    
    UFUNCTION(BlueprintPure)
    EMagicLeapImageTargetOrientation GetAxisOrientation() const;
    
};

