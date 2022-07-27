#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MeshComponent.generated.h"

class UMaterialInterface;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UMeshComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<UMaterialInterface*> OverrideMaterials;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bEnableMaterialParameterCaching: 1;
    
public:
    UMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValueOnMaterials(const FName ParameterName, const FVector ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValueOnMaterials(const FName ParameterName, const float ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintPure)
    bool IsMaterialSlotNameValid(FName MaterialSlotName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetMaterialSlotNames() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMaterialInterface*> GetMaterials() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaterialIndex(FName MaterialSlotName) const;
    
};

