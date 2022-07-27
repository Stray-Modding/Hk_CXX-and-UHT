#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ARComponent.generated.h"

class UARTrackedGeometry;
class UMaterialInterface;
class UMRMeshComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated)
    FGuid NativeID;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bUseDefaultReplication;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DefaultMeshMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DefaultWireframeMeshMaterial;
    
    UPROPERTY(Export)
    UMRMeshComponent* MRMeshComponent;
    
    UPROPERTY()
    UARTrackedGeometry* MyTrackedGeometry;
    
public:
    UARComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateVisualization();
    
    UFUNCTION(BlueprintCallable)
    void SetNativeID(FGuid NewNativeID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveRemove();
    
protected:
    UFUNCTION()
    void OnRep_Payload();
    
public:
    UFUNCTION(BlueprintPure)
    UMRMeshComponent* GetMRMesh();
    
};

