#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ENDISkelMesh_GpuMaxInfluences.h"
#include "ENiagaraDefaultRendererMotionVectorSetting.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "ENiagaraGpuBufferFormat.h"
#include "ENDISkelMesh_AdjacencyTriangleIndexFormat.h"
#include "ENDISkelMesh_GpuUniformSamplingFormat.h"
#include "NiagaraSettings.generated.h"

class UNiagaraEffectType;

UCLASS(DefaultConfig, Config=Niagara)
class NIAGARA_API UNiagaraSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultEffectType;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FText> QualityLevels;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FText> ComponentRendererWarningsPerClass;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ETextureRenderTargetFormat> DefaultRenderTargetFormat;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraGpuBufferFormat DefaultGridFormat;
    
    UPROPERTY(Config, EditAnywhere)
    ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ENDISkelMesh_GpuMaxInfluences::Type> NDISkelMesh_GpuMaxInfluences;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat::Type> NDISkelMesh_GpuUniformSamplingFormat;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat::Type> NDISkelMesh_AdjacencyTriangleIndexFormat;
    
private:
    UPROPERTY(Transient)
    UNiagaraEffectType* DefaultEffectTypePtr;
    
public:
    UNiagaraSettings();
};

