#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkTimecodeProviderEvaluationType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimecodeProvider -FallbackName=TimecodeProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectKey -FallbackName=LiveLinkSubjectKey
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "LiveLinkTimecodeProvider.generated.h"

UCLASS(EditInlineNew)
class LIVELINK_API ULiveLinkTimecodeProvider : public UTimecodeProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FLiveLinkSubjectKey SubjectKey;
    
    UPROPERTY(EditAnywhere)
    ELiveLinkTimecodeProviderEvaluationType Evaluation;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideFrameRate;
    
    UPROPERTY(EditAnywhere)
    FFrameRate OverrideFrameRate;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 BufferSize;
    
public:
    ULiveLinkTimecodeProvider();
};

