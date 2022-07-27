#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Interface_AssetUserData.h"
#include "BlendableInterface.h"
#include "LightmassMaterialInterfaceSettings.h"
#include "MaterialTextureInfo.h"
#include "EMaterialParameterAssociation.h"
#include "MaterialParameterInfo.h"
#include "MaterialInterface.generated.h"

class USubsurfaceProfile;
class UAssetUserData;
class UPhysicalMaterialMask;
class UPhysicalMaterial;
class UMaterialFunctionInterface;
class UMaterial;

UCLASS(Abstract, BlueprintType, MinimalAPI)
class UMaterialInterface : public UObject, public IBlendableInterface, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USubsurfaceProfile* SubsurfaceProfile;
    
protected:
    UPROPERTY(EditAnywhere)
    FLightmassMaterialInterfaceSettings LightmassSettings;
    
    UPROPERTY()
    TArray<FMaterialTextureInfo> TextureStreamingData;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> AssetUserData;
    
public:
    UMaterialInterface();
    UFUNCTION(BlueprintCallable)
    void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups, bool bFastResponse);
    
    UFUNCTION(BlueprintPure)
    UPhysicalMaterialMask* GetPhysicalMaterialMask() const;
    
    UFUNCTION(BlueprintPure)
    UPhysicalMaterial* GetPhysicalMaterialFromMap(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    UPhysicalMaterial* GetPhysicalMaterial() const;
    
    UFUNCTION(BlueprintPure)
    FMaterialParameterInfo GetParameterInfo(TEnumAsByte<EMaterialParameterAssociation> Association, FName ParameterName, UMaterialFunctionInterface* LayerFunction) const;
    
    UFUNCTION(BlueprintCallable)
    UMaterial* GetBaseMaterial();
    
    
    // Fix for true pure virtual functions not being implemented
};

