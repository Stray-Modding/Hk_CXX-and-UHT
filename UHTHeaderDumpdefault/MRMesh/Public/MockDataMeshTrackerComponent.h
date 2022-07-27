#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EMeshTrackerVertexColorMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MockDataMeshTrackerComponent.generated.h"

class UMRMeshComponent;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MRMESH_API UMockDataMeshTrackerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnMockDataMeshTrackerUpdated, int32, Index, const TArray<FVector>&, Vertices, const TArray<int32>&, Triangles, const TArray<FVector>&, Normals, const TArray<float>&, Confidence);
    
    UPROPERTY(BlueprintAssignable)
    FOnMockDataMeshTrackerUpdated OnMeshTrackerUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ScanWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RequestNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RequestVertexConfidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMeshTrackerVertexColorMode VertexColorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FColor> BlockVertexColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor VertexColorFromConfidenceZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor VertexColorFromConfidenceOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpdateInterval;
    
    UPROPERTY(Export, Transient)
    UMRMeshComponent* MRMesh;
    
    UMockDataMeshTrackerComponent();
    UFUNCTION(BlueprintCallable)
    void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
    
    UFUNCTION(BlueprintCallable)
    void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
    
};

