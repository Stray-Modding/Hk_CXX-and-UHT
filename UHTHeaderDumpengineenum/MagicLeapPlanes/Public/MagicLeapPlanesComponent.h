#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "MagicLeapPlanesResultDelegateMultiDelegate.h"
#include "EMagicLeapPlaneQueryFlags.h"
#include "MagicLeapPersistentPlanesResultDelegateMultiDelegate.h"
#include "EMagicLeapPlaneQueryType.h"
#include "MagicLeapPlanesComponent.generated.h"

class UBoxComponent;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAPPLANES_API UMagicLeapPlanesComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EMagicLeapPlaneQueryFlags> QueryFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* SearchVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinHolePerimeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPlaneArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMagicLeapPlaneQueryType QueryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SimilarityThreshold;
    
private:
    UPROPERTY(BlueprintAssignable)
    FMagicLeapPlanesResultDelegateMulti OnPlanesQueryResult;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapPersistentPlanesResultDelegateMulti OnPersistentPlanesQueryResult;
    
public:
    UMagicLeapPlanesComponent();
    UFUNCTION(BlueprintCallable)
    bool RequestPlanesAsync();
    
};

