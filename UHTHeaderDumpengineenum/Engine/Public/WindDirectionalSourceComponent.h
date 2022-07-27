#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "EWindSourceType.h"
#include "WindDirectionalSourceComponent.generated.h"

UCLASS(BlueprintType, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UWindDirectionalSourceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MinGustAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float MaxGustAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Radius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bPointWind: 1;
    
    UWindDirectionalSourceComponent();
    UFUNCTION(BlueprintCallable)
    void SetWindType(EWindSourceType InNewType);
    
    UFUNCTION(BlueprintCallable)
    void SetStrength(float InNewStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float InNewSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetRadius(float InNewRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumGustAmount(float InNewMinGust);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumGustAmount(float InNewMaxGust);
    
};

