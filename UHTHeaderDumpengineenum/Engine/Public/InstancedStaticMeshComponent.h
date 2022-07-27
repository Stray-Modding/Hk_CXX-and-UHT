#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "StaticMeshComponent.h"
#include "InstancedStaticMeshInstanceData.h"
#include "InstancedStaticMeshMappingInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "InstancedStaticMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UInstancedStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SkipSerialization)
    TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 NumCustomDataFloats;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, EditFixedSize, SkipSerialization)
    TArray<float> PerInstanceSMCustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InstancingRandomSeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 InstanceStartCullDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 InstanceEndCullDistance;
    
    UPROPERTY()
    TArray<int32> InstanceReorderTable;
    
protected:
    UPROPERTY(DuplicateTransient, TextExportTransient, Transient)
    int32 NumPendingLightmaps;
    
    UPROPERTY(DuplicateTransient, TextExportTransient, Transient)
    TArray<FInstancedStaticMeshMappingInfo> CachedMappings;
    
public:
    UInstancedStaticMeshComponent();
    UFUNCTION(BlueprintCallable)
    bool UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDataValue(int32 InstanceIndex, int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);
    
    UFUNCTION(BlueprintCallable)
    void SetCullDistances(int32 StartCullDistance, int32 EndCullDistance);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveInstance(int32 InstanceIndex);
    
    UFUNCTION(BlueprintPure)
    bool GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetInstancesOverlappingSphere(const FVector& Center, float Radius, bool bSphereInWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetInstancesOverlappingBox(const FBox& Box, bool bBoxInWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetInstanceCount() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearInstances();
    
    UFUNCTION(BlueprintCallable)
    bool BatchUpdateInstancesTransforms(int32 StartInstanceIndex, const TArray<FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool BatchUpdateInstancesTransform(int32 StartInstanceIndex, int32 NumInstances, const FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    int32 AddInstanceWorldSpace(const FTransform& WorldTransform);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> AddInstances(const TArray<FTransform>& InstanceTransforms, bool bShouldReturnIndices);
    
    UFUNCTION(BlueprintCallable)
    int32 AddInstance(const FTransform& InstanceTransform);
    
};

