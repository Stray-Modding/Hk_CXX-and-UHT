#pragma once
#include "CoreMinimal.h"
#include "EngineShowFlagsSetting.h"
#include "SceneComponent.h"
#include "ESceneCapturePrimitiveRenderMode.h"
#include "ESceneCaptureSource.h"
#include "SceneCaptureComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USceneCaptureComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESceneCapturePrimitiveRenderMode PrimitiveRenderMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    TEnumAsByte<ESceneCaptureSource> CaptureSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCaptureEveryFrame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCaptureOnMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysPersistRenderingState;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<AActor*> HiddenActors;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<AActor*> ShowOnlyActors;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float LODDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxViewDistanceOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CaptureSortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRayTracingIfEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    TArray<FEngineShowFlagsSetting> ShowFlagSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FString ProfilingEventName;
    
    USceneCaptureComponent();
    UFUNCTION(BlueprintCallable)
    void ShowOnlyComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void ShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureSortPriority(int32 NewCaptureSortPriority);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShowOnlyComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors);
    
    UFUNCTION(BlueprintCallable)
    void HideComponent(UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void HideActorComponents(AActor* InActor, const bool bIncludeFromChildActors);
    
    UFUNCTION(BlueprintCallable)
    void ClearShowOnlyComponents();
    
    UFUNCTION(BlueprintCallable)
    void ClearHiddenComponents();
    
};

