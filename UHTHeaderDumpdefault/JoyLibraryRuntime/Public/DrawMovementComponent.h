#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EDrawMovementType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "DrawMovementComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class JOYLIBRARYRUNTIME_API UDrawMovementComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DrawLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DrawHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DrawThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StartEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor DrawColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EDrawMovementType> DrawType;
    
    UDrawMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetDrawEnabled(bool _enabled);
    
    UFUNCTION(BlueprintPure)
    bool IsDrawEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

