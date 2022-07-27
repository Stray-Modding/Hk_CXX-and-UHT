#pragma once
#include "CoreMinimal.h"
#include "NiagaraRendererProperties.h"
#include "ENiagaraMeshPivotOffsetSpace.h"
#include "ENiagaraSortMode.h"
#include "NiagaraMeshRendererMeshProperties.h"
#include "ENiagaraRendererSourceDataMode.h"
#include "ENiagaraMeshFacingMode.h"
#include "NiagaraMeshMaterialOverride.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ENiagaraMeshLockedAxisSpace.h"
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraMaterialAttributeBinding.h"
#include "NiagaraMeshRendererProperties.generated.h"

class UStaticMesh;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraMeshRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraMeshRendererMeshProperties> Meshes;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRendererSourceDataMode SourceMode;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSortMode SortMode;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideMaterials: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSortOnlyWhenTranslucent: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bGpuLowLatencyTranslucency: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSubImageBlend: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableFrustumCulling: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableCameraDistanceCulling: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableMeshFlipbook: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraMeshMaterialOverride> OverrideMaterials;
    
    UPROPERTY(EditAnywhere)
    FVector2D SubImageSize;
    
    UPROPERTY(EditAnywhere)
    ENiagaraMeshFacingMode FacingMode;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockedAxisEnable: 1;
    
    UPROPERTY(EditAnywhere)
    FVector LockedAxis;
    
    UPROPERTY(EditAnywhere)
    ENiagaraMeshLockedAxisSpace LockedAxisSpace;
    
    UPROPERTY(EditAnywhere)
    float MinCameraDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxCameraDistance;
    
    UPROPERTY(EditAnywhere)
    uint32 RendererVisibility;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding PositionBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ColorBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding VelocityBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding MeshOrientationBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ScaleBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding SubImageIndexBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding CustomSortingBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding CameraOffsetBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding MeshIndexBinding;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings;
    
    UPROPERTY(Transient)
    FNiagaraVariableAttributeBinding PrevPositionBinding;
    
    UPROPERTY(Transient)
    FNiagaraVariableAttributeBinding PrevScaleBinding;
    
    UPROPERTY(Transient)
    FNiagaraVariableAttributeBinding PrevMeshOrientationBinding;
    
    UPROPERTY(Transient)
    FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;
    
    UPROPERTY(Transient)
    FNiagaraVariableAttributeBinding PrevVelocityBinding;
    
private:
    UPROPERTY()
    UStaticMesh* ParticleMesh;
    
    UPROPERTY()
    FVector PivotOffset;
    
    UPROPERTY()
    ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;
    
public:
    UNiagaraMeshRendererProperties();
};

