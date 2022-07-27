#pragma once
#include "CoreMinimal.h"
#include "LocalLightComponent.h"
#include "RectLightComponent.generated.h"

class UTexture;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API URectLightComponent : public ULocalLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SourceWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SourceHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BarnDoorAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BarnDoorLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture* SourceTexture;
    
    URectLightComponent();
    UFUNCTION(BlueprintCallable)
    void SetSourceWidth(float bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceTexture(UTexture* bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceHeight(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBarnDoorLength(float newValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBarnDoorAngle(float newValue);
    
};

