#pragma once
#include "CoreMinimal.h"
#include "MagicLeapMeshBlockSelectorInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EMagicLeapMeshType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
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
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshTrackerUpdated OnMeshTrackerUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScanWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapMeshType MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoundingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapMeshLOD LevelOfDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerimeterOfGapsToFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Planarize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisconnectedSectionArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestVertexConfidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapMeshVertexColorMode VertexColorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> BlockVertexColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor VertexColorFromConfidenceZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor VertexColorFromConfidenceOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveOverlappingTriangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UMRMeshComponent* MRMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

