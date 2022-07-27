#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MagicLeapImageTracker -ObjectName=EMagicLeapImageTargetOrientation -FallbackName=EMagicLeapImageTargetOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=AugmentedReality -ObjectName=ARCandidateImage -FallbackName=ARCandidateImage
#include "LuminARCandidateImage.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPAR_API ULuminARCandidateImage : public UARCandidateImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseUnreliablePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImageIsStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapImageTargetOrientation AxisOrientation;
    
public:
    ULuminARCandidateImage();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseUnreliablePose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetImageIsStationary() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMagicLeapImageTargetOrientation GetAxisOrientation() const;
    
};

