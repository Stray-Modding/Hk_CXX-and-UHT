#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Actor.h"
#include "DebugTextInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EBlendMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "HUD.generated.h"

class APlayerController;
class APawn;
class UCanvas;
class UFont;
class UTexture;
class UMaterialInterface;

UCLASS(NotPlaceable, Transient, Config=Game)
class ENGINE_API AHUD : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    APlayerController* PlayerOwner;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bLostFocusPaused: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bShowHUD: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bShowDebugInfo: 1;
    
    UPROPERTY(Transient)
    int32 CurrentTargetIndex;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bShowHitBoxDebugInfo: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bShowOverlays: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableDebugTextShadow: 1;
    
    UPROPERTY()
    TArray<AActor*> PostRenderedActors;
    
    UPROPERTY(GlobalConfig)
    TArray<FName> DebugDisplay;
    
    UPROPERTY(GlobalConfig)
    TArray<FName> ToggledDebugCategories;
    
protected:
    UPROPERTY()
    UCanvas* Canvas;
    
    UPROPERTY()
    UCanvas* DebugCanvas;
    
    UPROPERTY()
    TArray<FDebugTextInfo> DebugTextList;
    
    UPROPERTY()
    TSubclassOf<AActor> ShowDebugTargetDesiredClass;
    
    UPROPERTY()
    AActor* ShowDebugTargetActor;
    
public:
    AHUD();
    UFUNCTION(Exec)
    void ShowHUD();
    
    UFUNCTION(Exec)
    void ShowDebugToggleSubCategory(FName Category);
    
    UFUNCTION(Exec)
    void ShowDebugForReticleTargetToggle(TSubclassOf<AActor> DesiredClass);
    
    UFUNCTION(Exec)
    void ShowDebug(FName DebugType);
    
    UFUNCTION(Client, Reliable)
    void RemoveDebugText(AActor* SrcActor, bool bLeaveDurationText);
    
    UFUNCTION(Client, Reliable)
    void RemoveAllDebugStrings();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ReceiveHitBoxRelease(const FName BoxName);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ReceiveHitBoxEndCursorOver(const FName BoxName);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ReceiveHitBoxClick(const FName BoxName);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ReceiveHitBoxBeginCursorOver(const FName BoxName);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    
    UFUNCTION(BlueprintPure)
    FVector Project(FVector Location) const;
    
    UFUNCTION(Exec)
    void PreviousDebugTarget();
    
    UFUNCTION(Exec)
    void NextDebugTarget();
    
    UFUNCTION(BlueprintPure)
    void GetTextSize(const FString& Text, float& OutWidth, float& OutHeight, UFont* Font, float Scale) const;
    
    UFUNCTION(BlueprintPure)
    APlayerController* GetOwningPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetOwningPawn() const;
    
    UFUNCTION(BlueprintPure)
    void GetActorsInSelectionRectangle(TSubclassOf<AActor> ClassFilter, const FVector2D& FirstPoint, const FVector2D& SecondPoint, TArray<AActor*>& OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed);
    
    UFUNCTION(BlueprintCallable)
    void DrawTextureSimple(UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
    
    UFUNCTION(BlueprintCallable)
    void DrawTexture(UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);
    
    UFUNCTION(BlueprintCallable)
    void DrawText(const FString& Text, FLinearColor TextColor, float ScreenX, float ScreenY, UFont* Font, float Scale, bool bScalePosition);
    
    UFUNCTION(BlueprintCallable)
    void DrawRect(FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
    
    UFUNCTION(BlueprintCallable)
    void DrawMaterialTriangle(UMaterialInterface* Material, FVector2D V0_Pos, FVector2D V1_Pos, FVector2D V2_Pos, FVector2D V0_UV, FVector2D V1_UV, FVector2D V2_UV, FLinearColor V0_Color, FLinearColor V1_Color, FLinearColor V2_Color);
    
    UFUNCTION(BlueprintCallable)
    void DrawMaterialSimple(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
    
    UFUNCTION(BlueprintCallable)
    void DrawMaterial(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);
    
    UFUNCTION(BlueprintCallable)
    void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, FLinearColor LineColor, float LineThickness);
    
    UFUNCTION(BlueprintPure)
    void Deproject(float ScreenX, float ScreenY, FVector& WorldPosition, FVector& WorldDirection) const;
    
    UFUNCTION(BlueprintCallable)
    void AddHitBox(FVector2D Position, FVector2D Size, FName InName, bool bConsumesInput, int32 Priority);
    
    UFUNCTION(Client, Reliable)
    void AddDebugText(const FString& DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow);
    
};

