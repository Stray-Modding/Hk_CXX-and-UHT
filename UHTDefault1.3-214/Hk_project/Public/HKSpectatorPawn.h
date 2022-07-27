#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpectatorPawn -FallbackName=SpectatorPawn
#include "HKSpectatorPawn.generated.h"

class UCameraComponent;

UCLASS()
class HK_PROJECT_API AHKSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export)
    UCameraComponent* m_camera;
    
private:
    UPROPERTY(EditAnywhere)
    float m_moveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_horizontalLookSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_verticalLookSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_maxLookUpAngle;
    
    UPROPERTY(EditAnywhere)
    float m_teleportFeedbackClippingDistance;
    
public:
    AHKSpectatorPawn();
};

