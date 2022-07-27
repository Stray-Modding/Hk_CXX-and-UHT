#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MagicLeapMeshBlockSelectorInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EMagicLeapMeshType.h"
#include "EMagicLeapMeshLOD.h"
#include "EMagicLeapMeshVertexColorMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MagicLeapTrackingMeshInfo.h"
#include "MagicLeapMeshBlockRequest.h"
#include "MagicLeapMeshTrackerComponent.generated.h"

class UBoxComponent;
class UMRMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAP_API UMagicLeapMeshTrackerComponent : public USceneComponent, public IMagicLeapMeshBlockSelectorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnMeshTrackerUpdated, FGuid, ID, const TArray<FVector>&, Vertices, const TArray<int32>&, Triangles, const TArray<FVector>&, Normals, const TArray<float>&, Confidence);
    
    UPROPERTY(BlueprintAssignable)
    FOnMeshTrackerUpdated OnMeshTrackerUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ScanWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMagicLeapMeshType MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* BoundingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMagicLeapMeshLOD LevelOfDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PerimeterOfGapsToFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Planarize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DisconnectedSectionArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RequestNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RequestVertexConfidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMagicLeapMeshVertexColorMode VertexColorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FColor> BlockVertexColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor VertexColorFromConfidenceZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor VertexColorFromConfidenceOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RemoveOverlappingTriangles;
    
    UPROPERTY(Export, Transient)
    UMRMeshComponent* MRMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BricksPerFrame;
    
    UMagicLeapMeshTrackerComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectMeshBlocks(const FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumQueuedBlockUpdates();
    
    UFUNCTION(BlueprintCallable)
    void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
    
    UFUNCTION(BlueprintCallable)
    void DisconnectBlockSelector();
    
    UFUNCTION(BlueprintCallable)
    void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
    
    UFUNCTION(BlueprintCallable)
    void ConnectBlockSelector(TScriptInterface<IMagicLeapMeshBlockSelectorInterface> Selector);
    
    
    // Fix for true pure virtual functions not being implemented
};

