#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ZurgSpawningBox.generated.h"

class UBoxComponent;
class USceneComponent;
class UArrowComponent;
class UEditorTickComponent;

UCLASS(Blueprintable)
class HK_PROJECT_API AZurgSpawningBox : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawnVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_drawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* m_rootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_spawningBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* m_spawningVelocityDirectionArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEditorTickComponent* m_editorTickComponent;
    
public:
    AZurgSpawningBox();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSuggestedSpawnVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRandomPointInBox() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void _EditorTick(float _deltaTime);
    
};

