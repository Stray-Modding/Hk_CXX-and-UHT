#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "Interface_PostProcessVolume.h"
#include "PostProcessSettings.h"
#include "PostProcessVolume.generated.h"

class UBlendableInterface;
class IBlendableInterface;

UCLASS()
class ENGINE_API APostProcessVolume : public AVolume, public IInterface_PostProcessVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FPostProcessSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUnbound: 1;
    
    APostProcessVolume();
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);
    
    
    // Fix for true pure virtual functions not being implemented
};

