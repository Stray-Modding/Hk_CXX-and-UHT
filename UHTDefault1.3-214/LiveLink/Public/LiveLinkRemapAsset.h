#pragma once
#include "CoreMinimal.h"
#include "LiveLinkRetargetAsset.h"
#include "LiveLinkRemapAsset.generated.h"

UCLASS(Blueprintable)
class LIVELINK_API ULiveLinkRemapAsset : public ULiveLinkRetargetAsset {
    GENERATED_BODY()
public:
    ULiveLinkRemapAsset();
    UFUNCTION(BlueprintNativeEvent)
    void RemapCurveElements(UPARAM(Ref) TMap<FName, float>& CurveItems) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FName GetRemappedCurveName(FName CurveName) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FName GetRemappedBoneName(FName BoneName) const;
    
};

