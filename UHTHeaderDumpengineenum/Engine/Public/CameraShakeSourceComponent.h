#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ECameraShakeAttenuation.h"
#include "ECameraShakePlaySpace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CameraShakeSourceComponent.generated.h"

class UCameraShakeBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UCameraShakeSourceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECameraShakeAttenuation Attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InnerAttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OuterAttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCameraShakeBase> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoStart;
    
    UCameraShakeSourceComponent();
    UFUNCTION(BlueprintCallable)
    void StopAllCameraShakesOfType(TSubclassOf<UCameraShakeBase> InCameraShake, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCameraShakes(bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StartCameraShake(TSubclassOf<UCameraShakeBase> InCameraShake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintPure)
    float GetAttenuationFactor(const FVector& Location) const;
    
};

