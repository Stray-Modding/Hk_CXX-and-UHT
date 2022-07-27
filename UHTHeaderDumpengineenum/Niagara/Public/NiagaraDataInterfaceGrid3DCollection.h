#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGrid3D.h"
#include "NiagaraUserParameterBinding.h"
#include "ENiagaraGpuBufferFormat.h"
#include "NiagaraDataInterfaceGrid3DCollection.generated.h"

class UNiagaraComponent;
class UVolumeTexture;

UCLASS(BlueprintType, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 NumAttributes;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    
    UPROPERTY(EditAnywhere)
    ENiagaraGpuBufferFormat OverrideBufferFormat;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideFormat: 1;
    
    UNiagaraDataInterfaceGrid3DCollection();
    UFUNCTION(BlueprintCallable)
    void GetTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);
    
    UFUNCTION(BlueprintCallable)
    void GetRawTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);
    
    UFUNCTION(BlueprintCallable)
    bool FillVolumeTexture(const UNiagaraComponent* Component, UVolumeTexture* Dest, int32 AttributeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool FillRawVolumeTexture(const UNiagaraComponent* Component, UVolumeTexture* Dest, int32& TilesX, int32& TilesY, int32& TileZ);
    
};

