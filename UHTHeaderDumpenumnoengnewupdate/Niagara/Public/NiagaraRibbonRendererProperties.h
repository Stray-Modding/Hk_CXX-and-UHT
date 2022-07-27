#pragma once
#include "CoreMinimal.h"
#include "NiagaraRendererProperties.h"
#include "NiagaraRibbonUVSettings.h"
#include "NiagaraUserParameterBinding.h"
#include "ENiagaraRibbonFacingMode.h"
#include "NiagaraRibbonShapeCustomVertex.h"
#include "ENiagaraRibbonShapeMode.h"
#include "ENiagaraRibbonDrawDirection.h"
#include "ENiagaraRibbonTessellationMode.h"
#include "NiagaraMaterialAttributeBinding.h"
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraRibbonRendererProperties.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding MaterialUserParamBinding;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRibbonFacingMode FacingMode;
    
    UPROPERTY(EditAnywhere)
    FNiagaraRibbonUVSettings UV0Settings;
    
    UPROPERTY(EditAnywhere)
    FNiagaraRibbonUVSettings UV1Settings;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRibbonDrawDirection DrawDirection;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRibbonShapeMode Shape;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAccurateGeometry;
    
    UPROPERTY(EditAnywhere)
    int32 WidthSegmentationCount;
    
    UPROPERTY(EditAnywhere)
    int32 MultiPlaneCount;
    
    UPROPERTY(EditAnywhere)
    int32 TubeSubdivisions;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraRibbonShapeCustomVertex> CustomVertices;
    
    UPROPERTY(EditAnywhere)
    float CurveTension;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRibbonTessellationMode TessellationMode;
    
    UPROPERTY(EditAnywhere)
    int32 TessellationFactor;
    
    UPROPERTY(EditAnywhere)
    bool bUseConstantFactor;
    
    UPROPERTY(EditAnywhere)
    float TessellationAngle;
    
    UPROPERTY(EditAnywhere)
    bool bScreenSpaceTessellation;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding PositionBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ColorBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding VelocityBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding RibbonTwistBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding RibbonWidthBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding RibbonFacingBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding RibbonIdBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding RibbonLinkOrderBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding RibbonUVDistance;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding U0OverrideBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding V0RangeOverrideBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding U1OverrideBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding V1RangeOverrideBinding;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings;
    
    UNiagaraRibbonRendererProperties();
};

