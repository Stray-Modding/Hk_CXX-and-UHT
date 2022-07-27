#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "NoisableComponent.generated.h"

class UNoisableComponent;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API UNoisableComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FNoiseDelegate, UNoisableComponent*, _noisableComponent, FVector, _location, AActor*, _emitter);
    
    UPROPERTY(BlueprintAssignable)
    FNoiseDelegate OnNoised;
    
    UNoisableComponent();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _enable);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool OnNoise(FVector _location, AActor* _emitter);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

