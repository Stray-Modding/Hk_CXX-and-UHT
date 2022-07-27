#pragma once
#include "CoreMinimal.h"
#include "HKGameSubsystem.h"
#include "GameplayNoise.h"
#include "NoiseEvent.h"
#include "GameAudioSubsystem.generated.h"

class AActor;
class UNoisableComponent;

UCLASS(BlueprintType)
class HK_PROJECT_API UGameAudioSubsystem : public UHKGameSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TArray<UNoisableComponent*> m_noisableList;
    
    UPROPERTY()
    TArray<FGameplayNoise> m_gameplayNoiseList;
    
    UPROPERTY()
    TArray<FNoiseEvent> m_noiseEventQueue;
    
public:
    UGameAudioSubsystem();
    UFUNCTION(BlueprintCallable)
    void EmitGameplayNoise(AActor* _emitter, float _targetRadius, float _growTime, float _sustainTime);
    
};

