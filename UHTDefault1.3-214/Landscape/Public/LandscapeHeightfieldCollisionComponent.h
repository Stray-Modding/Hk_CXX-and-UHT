#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "LandscapeHeightfieldCollisionComponent.generated.h"

class ULandscapeLayerInfoObject;
class UPhysicalMaterial;
class ULandscapeComponent;

UCLASS(MinimalAPI, ClassGroup=Custom, Within=LandscapeProxy, meta=(BlueprintSpawnableComponent))
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos;
    
    UPROPERTY()
    int32 SectionBaseX;
    
    UPROPERTY()
    int32 SectionBaseY;
    
    UPROPERTY()
    int32 CollisionSizeQuads;
    
    UPROPERTY()
    float CollisionScale;
    
    UPROPERTY()
    int32 SimpleCollisionSizeQuads;
    
    UPROPERTY()
    TArray<uint8> CollisionQuadFlags;
    
    UPROPERTY()
    FGuid HeightfieldGuid;
    
    UPROPERTY()
    FBox CachedLocalBox;
    
    UPROPERTY(Export)
    TLazyObjectPtr<ULandscapeComponent> RenderComponent;
    
    UPROPERTY()
    TArray<UPhysicalMaterial*> CookedPhysicalMaterials;
    
    ULandscapeHeightfieldCollisionComponent();
    UFUNCTION(BlueprintPure)
    ULandscapeComponent* GetRenderComponent() const;
    
};

