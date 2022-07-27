#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "MagicLeapPlanesResultDelegateMultiDelegate.h"
#include "EMagicLeapPlaneQueryFlags.h"
#include "MagicLeapPersistentPlanesResultDelegateMultiDelegate.h"
#include "EMagicLeapPlaneQueryType.h"
#include "MagicLeapPlanesComponent.generated.h"

class UBoxComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAPPLANES_API UMagicLeapPlanesComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMagicLeapPlaneQueryFlags> QueryFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* SearchVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHolePerimeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPlaneArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapPlaneQueryType QueryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimilarityThreshold;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapPlanesResultDelegateMulti OnPlanesQueryResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapPersistentPlanesResultDelegateMulti OnPersistentPlanesQueryResult;
    
public:
    UMagicLeapPlanesComponent();
    UFUNCTION(BlueprintCallable)
    bool RequestPlanesAsync();
    
};

