#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "StreamableRenderAsset.h"
#include "PerPlatformInt.h"
#include "Interface_CollisionDataProvider.h"
#include "Interface_AssetUserData.h"
#include "StaticMaterial.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "StaticMesh.generated.h"

class UBodySetup;
class UStaticMeshSocket;
class UMaterialInterface;
class UAssetUserData;
class UObject;
class UNavCollisionBase;
class UStaticMeshDescription;

UCLASS(MinimalAPI)
class UStaticMesh : public UStreamableRenderAsset, public IInterface_CollisionDataProvider, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPerPlatformInt MinLOD;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LpvBiasMultiplier;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FStaticMaterial> StaticMaterials;
    
    UPROPERTY()
    float LightmapUVDensity;
    
    UPROPERTY(EditAnywhere)
    int32 LightMapResolution;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 LightMapCoordinateIndex;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DistanceFieldSelfShadowBias;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Instanced, Transient)
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LODForCollision;
    
    UPROPERTY(EditAnywhere)
    uint8 bGenerateMeshDistanceField: 1;
    
    UPROPERTY()
    uint8 bStripComplexCollisionForConsole: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bHasNavigationData: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bSupportUniformlyDistributedSampling: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bSupportPhysicalMaterialMasks: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportRayTracing: 1;
    
    UPROPERTY()
    uint8 bIsBuiltAtRuntime: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bAllowCPUAccess: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bSupportGpuUniformlyDistributedSampling: 1;
    
    UPROPERTY()
    TArray<UStaticMeshSocket*> Sockets;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FVector PositiveBoundsExtension;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FVector NegativeBoundsExtension;
    
    UPROPERTY()
    FBoxSphereBounds ExtendedBounds;
    
protected:
    UPROPERTY()
    int32 ElementToIgnoreForTexFactor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> AssetUserData;
    
public:
    UPROPERTY(Instanced)
    UObject* EditableMesh;
    
    UPROPERTY(DuplicateTransient, Instanced, Transient, VisibleAnywhere)
    UNavCollisionBase* NavCollision;
    
    UStaticMesh();
    UFUNCTION(BlueprintCallable)
    void SetStaticMaterials(const TArray<FStaticMaterial>& InStaticMaterials);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSocket(UStaticMeshSocket* Socket);
    
    UFUNCTION(BlueprintPure)
    TArray<FStaticMaterial> GetStaticMaterials() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSections(int32 InLOD) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumLODs() const;
    
    UFUNCTION(BlueprintPure)
    void GetMinimumLODForPlatforms(TMap<FName, int32>& PlatformMinimumLODs) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinimumLODForPlatform(const FName& PlatformName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaterialIndex(FName MaterialSlotName) const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetMaterial(int32 MaterialIndex) const;
    
    UFUNCTION(BlueprintPure)
    FBoxSphereBounds GetBounds() const;
    
    UFUNCTION(BlueprintPure)
    FBox GetBoundingBox() const;
    
    UFUNCTION(BlueprintPure)
    UStaticMeshSocket* FindSocket(FName InSocketName) const;
    
    UFUNCTION(BlueprintCallable)
    static UStaticMeshDescription* CreateStaticMeshDescription(UObject* Outer);
    
    UFUNCTION(BlueprintCallable)
    void BuildFromStaticMeshDescriptions(const TArray<UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision);
    
    UFUNCTION(BlueprintCallable)
    void AddSocket(UStaticMeshSocket* Socket);
    
    UFUNCTION(BlueprintCallable)
    FName AddMaterial(UMaterialInterface* Material);
    
    
    // Fix for true pure virtual functions not being implemented
};

