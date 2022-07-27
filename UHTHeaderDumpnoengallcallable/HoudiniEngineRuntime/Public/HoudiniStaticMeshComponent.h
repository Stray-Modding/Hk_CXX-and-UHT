#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "HoudiniStaticMeshComponent.generated.h"

class UHoudiniStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniStaticMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHoudiniStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox LocalBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoudiniIconVisible;
    
public:
    UHoudiniStaticMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetMesh(UHoudiniStaticMesh* InMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetHoudiniIconVisible(bool bInHoudiniIconVisible);
    
    UFUNCTION(BlueprintCallable)
    void NotifyMeshUpdated();
    
    UFUNCTION(BlueprintCallable)
    bool IsHoudiniIconVisible() const;
    
    UFUNCTION(BlueprintCallable)
    UHoudiniStaticMesh* GetMesh();
    
};

