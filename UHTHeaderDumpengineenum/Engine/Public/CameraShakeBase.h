#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraShakeBase.generated.h"

class APlayerCameraManager;
class UCameraShakePattern;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class ENGINE_API UCameraShakeBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSingleInstance;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float ShakeScale;
    
private:
    UPROPERTY(EditAnywhere, Instanced)
    UCameraShakePattern* RootShakePattern;
    
    UPROPERTY(Transient)
    APlayerCameraManager* CameraManager;
    
public:
    UCameraShakeBase();
    UFUNCTION(BlueprintCallable)
    void SetRootShakePattern(UCameraShakePattern* InPattern);
    
    UFUNCTION(BlueprintPure)
    UCameraShakePattern* GetRootShakePattern() const;
    
};

