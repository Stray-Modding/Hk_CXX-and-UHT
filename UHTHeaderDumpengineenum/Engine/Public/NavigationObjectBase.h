#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "NavAgentInterface.h"
#include "NavigationObjectBase.generated.h"

class UCapsuleComponent;
class UBillboardComponent;

UCLASS(Abstract)
class ENGINE_API ANavigationObjectBase : public AActor, public INavAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(Export)
    UBillboardComponent* GoodSprite;
    
    UPROPERTY(Export)
    UBillboardComponent* BadSprite;
    
public:
    UPROPERTY()
    uint8 bIsPIEPlayerStart: 1;
    
    ANavigationObjectBase();
    
    // Fix for true pure virtual functions not being implemented
};

