#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkVirtualSubject -FallbackName=LiveLinkVirtualSubject
#include "LiveLinkAnimationVirtualSubject.generated.h"

UCLASS()
class LIVELINK_API ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAppendSubjectNameToBones;
    
    ULiveLinkAnimationVirtualSubject();
};

