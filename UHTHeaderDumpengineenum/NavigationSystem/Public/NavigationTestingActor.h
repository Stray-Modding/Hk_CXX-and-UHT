#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAgentInterface -FallbackName=NavAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAgentProperties -FallbackName=NavAgentProperties
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavPathObserverInterface -FallbackName=NavPathObserverInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ENavCostDisplay.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "NavigationTestingActor.generated.h"

class UCapsuleComponent;
class UNavigationInvokerComponent;
class ANavigationData;
class ANavigationTestingActor;
class UNavigationQueryFilter;

UCLASS()
class NAVIGATIONSYSTEM_API ANavigationTestingActor : public AActor, public INavAgentInterface, public INavPathObserverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(EditAnywhere, Export)
    UNavigationInvokerComponent* InvokerComponent;
    
    UPROPERTY(EditAnywhere)
    uint8 bActAsNavigationInvoker: 1;
    
public:
    UPROPERTY(EditAnywhere)
    FNavAgentProperties NavAgentProps;
    
    UPROPERTY(EditAnywhere)
    FVector QueryingExtent;
    
    UPROPERTY(Transient)
    ANavigationData* MyNavData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector ProjectedLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bProjectedLocationValid: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSearchStart: 1;
    
    UPROPERTY(EditAnywhere)
    float CostLimitFactor;
    
    UPROPERTY(EditAnywhere)
    float MinimumCostLimit;
    
    UPROPERTY(EditAnywhere)
    uint8 bBacktracking: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseHierarchicalPathfinding: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bGatherDetailedInfo: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawDistanceToWall: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowNodePool: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowBestPath: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowDiffWithPreviousStep: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShouldBeVisibleInGame: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENavCostDisplay::Type> CostDisplayMode;
    
    UPROPERTY(EditAnywhere)
    FVector2D TextCanvasOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    uint8 bPathExist: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    uint8 bPathIsPartial: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    uint8 bPathSearchOutOfNodes: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float PathfindingTime;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float PathCost;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    int32 PathfindingSteps;
    
    UPROPERTY(EditAnywhere)
    ANavigationTestingActor* OtherActor;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(EditInstanceOnly, Transient)
    int32 ShowStepIndex;
    
    UPROPERTY(EditAnywhere)
    float OffsetFromCornersDistance;
    
    ANavigationTestingActor();
    
    // Fix for true pure virtual functions not being implemented
};

