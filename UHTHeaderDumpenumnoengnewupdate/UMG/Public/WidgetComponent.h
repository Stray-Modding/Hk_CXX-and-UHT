#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "EWidgetTimingPolicy.h"
#include "EWidgetBlendMode.h"
#include "EWidgetSpace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EWindowVisibility.h"
#include "ETickMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EWidgetGeometryMode.h"
#include "WidgetComponent.generated.h"

class UUserWidget;
class ULocalPlayer;
class UBodySetup;
class UMaterialInterface;
class UTextureRenderTarget2D;
class UMaterialInstanceDynamic;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMG_API UWidgetComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EWidgetSpace Space;
    
    UPROPERTY(EditAnywhere)
    EWidgetTimingPolicy TimingPolicy;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(EditAnywhere)
    FIntPoint DrawSize;
    
    UPROPERTY(EditAnywhere)
    bool bManuallyRedraw;
    
    UPROPERTY()
    bool bRedrawRequested;
    
    UPROPERTY(EditAnywhere)
    float RedrawTime;
    
    UPROPERTY()
    FIntPoint CurrentDrawSize;
    
    UPROPERTY(EditAnywhere)
    bool bDrawAtDesiredSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D Pivot;
    
    UPROPERTY(EditAnywhere)
    bool bReceiveHardwareInput;
    
    UPROPERTY(EditAnywhere)
    bool bWindowFocusable;
    
    UPROPERTY(EditAnywhere)
    EWindowVisibility WindowVisibility;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bApplyGammaCorrection;
    
    UPROPERTY()
    ULocalPlayer* OwnerPlayer;
    
    UPROPERTY(EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor TintColorAndOpacity;
    
    UPROPERTY(EditAnywhere)
    float OpacityFromTexture;
    
    UPROPERTY(EditAnywhere)
    EWidgetBlendMode BlendMode;
    
    UPROPERTY(EditAnywhere)
    bool bIsTwoSided;
    
    UPROPERTY(EditAnywhere)
    bool TickWhenOffscreen;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* BodySetup;
    
    UPROPERTY()
    UMaterialInterface* TranslucentMaterial;
    
    UPROPERTY()
    UMaterialInterface* TranslucentMaterial_OneSided;
    
    UPROPERTY()
    UMaterialInterface* OpaqueMaterial;
    
    UPROPERTY()
    UMaterialInterface* OpaqueMaterial_OneSided;
    
    UPROPERTY()
    UMaterialInterface* MaskedMaterial;
    
    UPROPERTY()
    UMaterialInterface* MaskedMaterial_OneSided;
    
    UPROPERTY(DuplicateTransient, Transient)
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(DuplicateTransient, Transient)
    UMaterialInstanceDynamic* MaterialInstance;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bAddedToScreen;
    
    UPROPERTY()
    bool bEditTimeUsable;
    
    UPROPERTY(EditDefaultsOnly)
    FName SharedLayerName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 LayerZOrder;
    
    UPROPERTY(EditAnywhere)
    EWidgetGeometryMode GeometryMode;
    
    UPROPERTY(EditAnywhere)
    float CylinderArcAngle;
    
    UPROPERTY(EditAnywhere)
    ETickMode TickMode;
    
private:
    UPROPERTY(DuplicateTransient, Export, Transient)
    UUserWidget* Widget;
    
public:
    UWidgetComponent();
    UFUNCTION(BlueprintCallable)
    void SetWindowVisibility(EWindowVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetWindowFocusable(bool bInWindowFocusable);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetSpace(EWidgetSpace NewSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetWidget(UUserWidget* NewWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetTwoSided(const bool bWantTwoSided);
    
    UFUNCTION(BlueprintCallable)
    void SetTintColorAndOpacity(const FLinearColor NewTintColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetTickWhenOffscreen(const bool bWantTickWhenOffscreen);
    
    UFUNCTION(BlueprintCallable)
    void SetTickMode(ETickMode InTickMode);
    
    UFUNCTION(BlueprintCallable)
    void SetRedrawTime(float InRedrawTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPivot(const FVector2D& InPivot);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerPlayer(ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetManuallyRedraw(bool bUseManualRedraw);
    
    UFUNCTION(BlueprintCallable)
    void SetGeometryMode(EWidgetGeometryMode InGeometryMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawSize(FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
    
    UFUNCTION(BlueprintCallable)
    void SetCylinderArcAngle(const float InCylinderArcAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(const FLinearColor NewBackgroundColor);
    
    UFUNCTION(BlueprintCallable)
    void RequestRenderUpdate();
    
    UFUNCTION(BlueprintCallable)
    void RequestRedraw();
    
    UFUNCTION(BlueprintPure)
    bool IsWidgetVisible() const;
    
    UFUNCTION(BlueprintPure)
    EWindowVisibility GetWindowVisiblility() const;
    
    UFUNCTION(BlueprintPure)
    bool GetWindowFocusable() const;
    
    UFUNCTION(BlueprintPure)
    EWidgetSpace GetWidgetSpace() const;
    
    UFUNCTION(BlueprintPure)
    UUserWidget* GetWidget() const;
    
    UFUNCTION(BlueprintPure)
    UUserWidget* GetUserWidgetObject() const;
    
    UFUNCTION(BlueprintPure)
    bool GetTwoSided() const;
    
    UFUNCTION(BlueprintPure)
    bool GetTickWhenOffscreen() const;
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetRenderTarget() const;
    
    UFUNCTION(BlueprintPure)
    float GetRedrawTime() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetPivot() const;
    
    UFUNCTION(BlueprintPure)
    ULocalPlayer* GetOwnerPlayer() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetMaterialInstance() const;
    
    UFUNCTION(BlueprintPure)
    bool GetManuallyRedraw() const;
    
    UFUNCTION(BlueprintPure)
    EWidgetGeometryMode GetGeometryMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetDrawSize() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDrawAtDesiredSize() const;
    
    UFUNCTION(BlueprintPure)
    float GetCylinderArcAngle() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetCurrentDrawSize() const;
    
};

