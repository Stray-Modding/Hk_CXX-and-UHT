#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "VictorySubtitleCue.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SubtitleCue -FallbackName=SubtitleCue
#include "VictoryPC.generated.h"

class UAudioComponent;
class USoundBase;

UCLASS()
class VICTORYBPLIBRARY_API AVictoryPC : public APlayerController {
    GENERATED_BODY()
public:
    AVictoryPC();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UAudioComponent* VictoryPlaySpeechSound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    bool VictoryPC_GetMyIP_SendRequest();
    
    UFUNCTION(BlueprintImplementableEvent)
    void VictoryPC_GetMyIP_DataReceived(const FString& YourIP);
    
    UFUNCTION()
    void Subtitles_CPPDelegate(const TArray<FSubtitleCue>& VictorySubtitles, float CueDuration);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVictorySubtitlesQueued(const TArray<FVictorySubtitleCue>& VictorySubtitles, float CueDuration);
    
};

