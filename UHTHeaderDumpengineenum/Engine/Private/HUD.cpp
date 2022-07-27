#include "HUD.h"
#include "Templates/SubclassOf.h"

class UTexture;
class AActor;
class UFont;
class APlayerController;
class APawn;
class UMaterialInterface;

void AHUD::ShowHUD() {
}

void AHUD::ShowDebugToggleSubCategory(FName Category) {
}

void AHUD::ShowDebugForReticleTargetToggle(TSubclassOf<AActor> DesiredClass) {
}

void AHUD::ShowDebug(FName DebugType) {
}

void AHUD::RemoveDebugText_Implementation(AActor* SrcActor, bool bLeaveDurationText) {
}

void AHUD::RemoveAllDebugStrings_Implementation() {
}






FVector AHUD::Project(FVector Location) const {
    return FVector{};
}

void AHUD::PreviousDebugTarget() {
}

void AHUD::NextDebugTarget() {
}

void AHUD::GetTextSize(const FString& Text, float& OutWidth, float& OutHeight, UFont* Font, float Scale) const {
}

APlayerController* AHUD::GetOwningPlayerController() const {
    return NULL;
}

APawn* AHUD::GetOwningPawn() const {
    return NULL;
}

void AHUD::GetActorsInSelectionRectangle(TSubclassOf<AActor> ClassFilter, const FVector2D& FirstPoint, const FVector2D& SecondPoint, TArray<AActor*>& OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed) {
}

void AHUD::DrawTextureSimple(UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition) {
}

void AHUD::DrawTexture(UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot) {
}

void AHUD::DrawText(const FString& Text, FLinearColor TextColor, float ScreenX, float ScreenY, UFont* Font, float Scale, bool bScalePosition) {
}

void AHUD::DrawRect(FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH) {
}

void AHUD::DrawMaterialTriangle(UMaterialInterface* Material, FVector2D V0_Pos, FVector2D V1_Pos, FVector2D V2_Pos, FVector2D V0_UV, FVector2D V1_UV, FVector2D V2_UV, FLinearColor V0_Color, FLinearColor V1_Color, FLinearColor V2_Color) {
}

void AHUD::DrawMaterialSimple(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition) {
}

void AHUD::DrawMaterial(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot) {
}

void AHUD::DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, FLinearColor LineColor, float LineThickness) {
}

void AHUD::Deproject(float ScreenX, float ScreenY, FVector& WorldPosition, FVector& WorldDirection) const {
}

void AHUD::AddHitBox(FVector2D Position, FVector2D Size, FName InName, bool bConsumesInput, int32 Priority) {
}

void AHUD::AddDebugText_Implementation(const FString& DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow) {
}

AHUD::AHUD() {
    this->PlayerOwner = NULL;
    this->bLostFocusPaused = false;
    this->bShowHUD = true;
    this->bShowDebugInfo = false;
    this->CurrentTargetIndex = 0;
    this->bShowHitBoxDebugInfo = false;
    this->bShowOverlays = false;
    this->bEnableDebugTextShadow = false;
    this->DebugDisplay.AddDefaulted(1);
    this->Canvas = NULL;
    this->DebugCanvas = NULL;
    this->ShowDebugTargetDesiredClass = NULL;
    this->ShowDebugTargetActor = NULL;
}

