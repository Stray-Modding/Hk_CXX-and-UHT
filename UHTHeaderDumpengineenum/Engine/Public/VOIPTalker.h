#pragma once
#include "CoreMinimal.h"
#include "VoiceSettings.h"
#include "ActorComponent.h"
#include "VOIPTalker.generated.h"

class UAudioComponent;
class APlayerState;
class UVOIPTalker;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UVOIPTalker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVoiceSettings Settings;
    
    UVOIPTalker();
    UFUNCTION(BlueprintCallable)
    void RegisterWithPlayerState(APlayerState* OwningState);
    
    UFUNCTION(BlueprintCallable)
    float GetVoiceLevel();
    
    UFUNCTION(BlueprintCallable)
    static UVOIPTalker* CreateTalkerForPlayer(APlayerState* OwningState);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void BPOnTalkingEnd();
    
    UFUNCTION(BlueprintNativeEvent)
    void BPOnTalkingBegin(UAudioComponent* AudioComponent);
    
};

