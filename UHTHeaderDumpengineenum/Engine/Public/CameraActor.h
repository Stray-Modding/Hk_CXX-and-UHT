#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "EAutoReceiveInput.h"
#include "PostProcessSettings.h"
#include "CameraActor.generated.h"

class UCameraComponent;
class USceneComponent;

UCLASS()
class ENGINE_API ACameraActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAutoReceiveInput::Type> AutoActivateForPlayer;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY()
    uint8 bConstrainAspectRatio: 1;
    
    UPROPERTY()
    float AspectRatio;
    
    UPROPERTY()
    float FOVAngle;
    
    UPROPERTY()
    float PostProcessBlendWeight;
    
    UPROPERTY()
    FPostProcessSettings PostProcessSettings;
    
public:
    ACameraActor();
    UFUNCTION(BlueprintPure)
    int32 GetAutoActivatePlayerIndex() const;
    
};

