#include "TextRenderComponent.h"

class UMaterialInterface;
class UFont;

void UTextRenderComponent::SetYScale(float Value) {
}

void UTextRenderComponent::SetXScale(float Value) {
}

void UTextRenderComponent::SetWorldSize(float Value) {
}

void UTextRenderComponent::SetVertSpacingAdjust(float Value) {
}

void UTextRenderComponent::SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value) {
}

void UTextRenderComponent::SetTextRenderColor(FColor Value) {
}

void UTextRenderComponent::SetTextMaterial(UMaterialInterface* Material) {
}

void UTextRenderComponent::SetText(const FString& Value) {
}

void UTextRenderComponent::SetHorizSpacingAdjust(float Value) {
}

void UTextRenderComponent::SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value) {
}

void UTextRenderComponent::SetFont(UFont* Value) {
}

void UTextRenderComponent::K2_SetText(const FText& Value) {
}

FVector UTextRenderComponent::GetTextWorldSize() const {
    return FVector{};
}

FVector UTextRenderComponent::GetTextLocalSize() const {
    return FVector{};
}

UTextRenderComponent::UTextRenderComponent() {
    this->Text = FText::FromString(TEXT("Text"));
    this->HorizontalAlignment = EHTA_Left;
    this->VerticalAlignment = EVRTA_TextBottom;
    this->XScale = 1.00f;
    this->YScale = 1.00f;
    this->WorldSize = 26.00f;
    this->InvDefaultSize = 0.04f;
    this->HorizSpacingAdjust = 0.00f;
    this->VertSpacingAdjust = 0.00f;
    this->bAlwaysRenderAsText = false;
}

