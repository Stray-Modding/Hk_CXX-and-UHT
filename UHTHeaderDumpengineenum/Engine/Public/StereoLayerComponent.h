#pragma once
#include "CoreMinimal.h"
#include "EStereoLayerType.h"
#include "EquirectProps.h"
#include "SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
#include "EStereoLayerShape.h"
#include "StereoLayerComponent.generated.h"

class UStereoLayerShape;
class UTexture;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UStereoLayerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bLiveTexture: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSupportsDepth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bNoAlphaChannel: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture* LeftTexture;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bQuadPreserveTextureRatio: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    FVector2D QuadSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    FBox2D UVRect;
    
    UPROPERTY()
    float CylinderRadius;
    
    UPROPERTY()
    float CylinderOverlayArc;
    
    UPROPERTY()
    int32 CylinderHeight;
    
    UPROPERTY()
    FEquirectProps EquirectProps;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TEnumAsByte<EStereoLayerType> StereoLayerType;
    
    UPROPERTY()
    TEnumAsByte<EStereoLayerShape> StereoLayerShape;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, NoClear)
    UStereoLayerShape* Shape;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    int32 Priority;
    
public:
    UStereoLayerComponent();
    UFUNCTION(BlueprintCallable)
    void SetUVRect(FBox2D InUVRect);
    
    UFUNCTION(BlueprintCallable)
    void SetTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetQuadSize(FVector2D InQuadSize);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 InPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetEquirectProps(FEquirectProps InScaleBiases);
    
    UFUNCTION(BlueprintCallable)
    void MarkTextureForUpdate();
    
    UFUNCTION(BlueprintPure)
    FBox2D GetUVRect() const;
    
    UFUNCTION(BlueprintPure)
    UTexture* GetTexture() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetQuadSize() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPriority() const;
    
    UFUNCTION(BlueprintPure)
    UTexture* GetLeftTexture() const;
    
};

