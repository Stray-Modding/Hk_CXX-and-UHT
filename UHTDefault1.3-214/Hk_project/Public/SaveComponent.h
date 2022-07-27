#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SaveComponent.generated.h"

class USaveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HK_PROJECT_API USaveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveLoadDelegate, USaveComponent*, _saveComponent);
    
    UPROPERTY(BlueprintAssignable)
    FSaveLoadDelegate BeforeSaved;
    
    UPROPERTY(BlueprintAssignable)
    FSaveLoadDelegate AfterLoaded;
    
private:
    UPROPERTY(EditAnywhere)
    bool m_enabled;
    
    UPROPERTY(EditAnywhere)
    bool m_doSaveTransforms;
    
    UPROPERTY(EditAnywhere)
    FName m_levelNameOverride;
    
public:
    USaveComponent();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _enabled);
    
    UFUNCTION(BlueprintPure)
    bool IsRegistered() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
};

