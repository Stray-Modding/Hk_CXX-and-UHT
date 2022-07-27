#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ZurgSpawningBox.generated.h"

class UArrowComponent;
class USceneComponent;
class UEditorTickComponent;
class UBoxComponent;

UCLASS()
class HK_PROJECT_API AZurgSpawningBox : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_spawnVelocity;
    
    UPROPERTY(EditAnywhere)
    bool m_drawDebug;
    
    UPROPERTY(EditDefaultsOnly, Export)
    USceneComponent* m_rootComponent;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UBoxComponent* m_spawningBoxComponent;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UArrowComponent* m_spawningVelocityDirectionArrowComponent;
    
    UPROPERTY(Export)
    UEditorTickComponent* m_editorTickComponent;
    
public:
    AZurgSpawningBox();
    UFUNCTION(BlueprintPure)
    FVector GetSuggestedSpawnVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRandomPointInBox() const;
    
private:
    UFUNCTION()
    void _EditorTick(float _deltaTime);
    
};

