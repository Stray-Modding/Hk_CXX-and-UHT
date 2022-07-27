#pragma once
#include "CoreMinimal.h"
#include "TimecodeProvider.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "SystemTimeTimecodeProvider.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API USystemTimeTimecodeProvider : public UTimecodeProvider {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFrameRate FrameRate;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateFullFrame;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseHighPerformanceClock;
    
    USystemTimeTimecodeProvider();
};

