#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
#include "RuntimeVirtualTextureComponent.generated.h"

class AActor;
class UVirtualTextureBuilder;
class URuntimeVirtualTexture;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API URuntimeVirtualTextureComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> BoundsAlignActor;
    
    UPROPERTY(Transient, VisibleAnywhere)
    bool bSetBoundsButton;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bSnapBoundsToLandscape;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NonPIEDuplicateTransient)
    URuntimeVirtualTexture* VirtualTexture;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bEnableScalability;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint32 ScalabilityGroup;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bHidePrimitives;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NonPIEDuplicateTransient)
    UVirtualTextureBuilder* StreamingTexture;
    
    UPROPERTY(EditAnywhere)
    int32 StreamLowMips;
    
    UPROPERTY(Transient, VisibleAnywhere)
    bool bBuildStreamingMipsButton;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bEnableCompressCrunch;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseStreamingLowMipsInEditor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere, Transient)
    bool bBuildDebugStreamingMips;
    
public:
    URuntimeVirtualTextureComponent();
    UFUNCTION(BlueprintCallable)
    void Invalidate(const FBoxSphereBounds& WorldBounds);
    
};

