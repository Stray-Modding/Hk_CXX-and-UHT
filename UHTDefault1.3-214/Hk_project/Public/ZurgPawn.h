#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "ZurgPawn.generated.h"

class UZurgSettings;
class ACatPawn;
class USceneComponent;

UCLASS()
class HK_PROJECT_API AZurgPawn : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UZurgSettings* ZurgSettings;
    
    AZurgPawn();
    UFUNCTION(BlueprintNativeEvent)
    void OnDetachedFromCat(ACatPawn* _catPawn, USceneComponent* _attachedComponent, FName _socketName);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnAttachedToCat(ACatPawn* _catPawn, USceneComponent* _attachedComponent, FName _socketName);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanGrabCat() const;
    
};

