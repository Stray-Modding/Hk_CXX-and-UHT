#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState.h"
#include "ETrailWidthMode.h"
#include "AnimNotifyState_Trail.generated.h"

class UAnimSequenceBase;
class UParticleSystem;
class USkeletalMeshComponent;

UCLASS(CollapseCategories, EditInlineNew)
class ENGINE_API UAnimNotifyState_Trail : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* PSTemplate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FirstSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SecondSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETrailWidthMode> WidthScaleMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName WidthScaleCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bRecycleSpawnedSystems: 1;
    
    UAnimNotifyState_Trail();
    UFUNCTION(BlueprintImplementableEvent)
    UParticleSystem* OverridePSTemplate(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

