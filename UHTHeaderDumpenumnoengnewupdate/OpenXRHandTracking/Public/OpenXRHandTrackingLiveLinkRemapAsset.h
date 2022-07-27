#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLink -ObjectName=LiveLinkRetargetAsset -FallbackName=LiveLinkRetargetAsset
#include "EQuatSwizzleAxisB.h"
#include "OpenXRHandTrackingLiveLinkRemapAsset.generated.h"

UCLASS()
class UOpenXRHandTrackingLiveLinkRemapAsset : public ULiveLinkRetargetAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bHasMetacarpals;
    
    UPROPERTY(EditAnywhere)
    bool bRetargetRotationOnly;
    
    UPROPERTY(EditAnywhere)
    EQuatSwizzleAxisB SwizzleX;
    
    UPROPERTY(EditAnywhere)
    EQuatSwizzleAxisB SwizzleY;
    
    UPROPERTY(EditAnywhere)
    EQuatSwizzleAxisB SwizzleZ;
    
    UPROPERTY(EditAnywhere)
    EQuatSwizzleAxisB SwizzleW;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> HandTrackingBoneNameMap;
    
    UOpenXRHandTrackingLiveLinkRemapAsset();
};

