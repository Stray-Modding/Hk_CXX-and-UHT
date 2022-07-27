#pragma once
#include "CoreMinimal.h"
#include "ChaosBreakingEventData.h"
#include "ChaosCollisionEventRequestSettings.h"
#include "ChaosTrailingEventRequestSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "OnChaosCollisionEventsDelegate.h"
#include "ChaosBreakingEventRequestSettings.h"
#include "OnChaosBreakingEventsDelegate.h"
#include "OnChaosTrailingEventsDelegate.h"
#include "ChaosTrailingEventData.h"
#include "EChaosTrailingSortMethod.h"
#include "ChaosCollisionEventData.h"
#include "EChaosCollisionSortMethod.h"
#include "EChaosBreakingSortMethod.h"
#include "ChaosDestructionListener.generated.h"

class AChaosSolverActor;
class AGeometryCollectionActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCOLLECTIONENGINE_API UChaosDestructionListener : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsCollisionEventListeningEnabled: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsBreakingEventListeningEnabled: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsTrailingEventListeningEnabled: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FChaosCollisionEventRequestSettings CollisionEventRequestSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FChaosBreakingEventRequestSettings BreakingEventRequestSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FChaosTrailingEventRequestSettings TrailingEventRequestSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<AChaosSolverActor*> ChaosSolverActors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<AGeometryCollectionActor*> GeometryCollectionActors;
    
    UPROPERTY(BlueprintAssignable)
    FOnChaosCollisionEvents OnCollisionEvents;
    
    UPROPERTY(BlueprintAssignable)
    FOnChaosBreakingEvents OnBreakingEvents;
    
    UPROPERTY(BlueprintAssignable)
    FOnChaosTrailingEvents OnTrailingEvents;
    
    UChaosDestructionListener();
    UFUNCTION(BlueprintCallable)
    void SortTrailingEvents(UPARAM(Ref) TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);
    
    UFUNCTION(BlueprintCallable)
    void SortCollisionEvents(UPARAM(Ref) TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);
    
    UFUNCTION(BlueprintCallable)
    void SortBreakingEvents(UPARAM(Ref) TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetTrailingEventRequestSettings(const FChaosTrailingEventRequestSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetTrailingEventEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEventRequestSettings(const FChaosCollisionEventRequestSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEventEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakingEventRequestSettings(const FChaosBreakingEventRequestSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakingEventEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveChaosSolverActor(AChaosSolverActor* ChaosSolverActor);
    
    UFUNCTION(BlueprintPure)
    bool IsEventListening() const;
    
    UFUNCTION(BlueprintCallable)
    void AddGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);
    
    UFUNCTION(BlueprintCallable)
    void AddChaosSolverActor(AChaosSolverActor* ChaosSolverActor);
    
};

