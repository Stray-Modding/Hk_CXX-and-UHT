#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ETimecodeProviderSynchronizationState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=QualifiedFrameTime -FallbackName=QualifiedFrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "TimecodeProvider.generated.h"

UCLASS(Abstract, BlueprintType)
class ENGINE_API UTimecodeProvider : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float FrameDelay;
    
    UTimecodeProvider();
    UFUNCTION(BlueprintPure)
    FTimecode GetTimecode() const;
    
    UFUNCTION(BlueprintPure)
    ETimecodeProviderSynchronizationState GetSynchronizationState() const;
    
    UFUNCTION(BlueprintPure)
    FQualifiedFrameTime GetQualifiedFrameTime() const;
    
    UFUNCTION(BlueprintPure)
    FFrameRate GetFrameRate() const;
    
    UFUNCTION(BlueprintPure)
    FTimecode GetDelayedTimecode() const;
    
    UFUNCTION(BlueprintPure)
    FQualifiedFrameTime GetDelayedQualifiedFrameTime() const;
    
    UFUNCTION(BlueprintCallable)
    bool FetchTimecode(FQualifiedFrameTime& OutFrameTime);
    
    UFUNCTION(BlueprintCallable)
    void FetchAndUpdate();
    
};

