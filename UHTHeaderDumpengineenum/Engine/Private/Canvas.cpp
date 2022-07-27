#include "Canvas.h"

class UFont;
class UTexture;
class UMaterialInterface;

FVector2D UCanvas::K2_TextSize(UFont* RenderFont, const FString& RenderText, FVector2D Scale) {
    return FVector2D{};
}

FVector2D UCanvas::K2_StrLen(UFont* RenderFont, const FString& RenderText) {
    return FVector2D{};
}

FVector UCanvas::K2_Project(FVector WorldLocation) {
    return FVector{};
}

void UCanvas::K2_DrawTriangle(UTexture* RenderTexture, TArray<FCanvasUVTri> Triangles) {
}

void UCanvas::K2_DrawTexture(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, TEnumAsByte<EBlendMode> BlendMode, float Rotation, FVector2D PivotPoint) {
}

void UCanvas::K2_DrawText(UFont* RenderFont, const FString& RenderText, FVector2D ScreenPosition, FVector2D Scale, FLinearColor RenderColor, float Kerning, FLinearColor ShadowColor, FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, FLinearColor OutlineColor) {
}

void UCanvas::K2_DrawPolygon(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D Radius, int32 NumberOfSides, FLinearColor RenderColor) {
}

void UCanvas::K2_DrawMaterialTriangle(UMaterialInterface* RenderMaterial, TArray<FCanvasUVTri> Triangles) {
}

void UCanvas::K2_DrawMaterial(UMaterialInterface* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint) {
}

void UCanvas::K2_DrawLine(FVector2D ScreenPositionA, FVector2D ScreenPositionB, float Thickness, FLinearColor RenderColor) {
}

void UCanvas::K2_DrawBox(FVector2D ScreenPosition, FVector2D ScreenSize, float Thickness, FLinearColor RenderColor) {
}

void UCanvas::K2_DrawBorder(UTexture* BorderTexture, UTexture* BackgroundTexture, UTexture* LeftBorderTexture, UTexture* RightBorderTexture, UTexture* TopBorderTexture, UTexture* BottomBorderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, FVector2D BorderScale, FVector2D BackgroundScale, float Rotation, FVector2D PivotPoint, FVector2D CornerSize) {
}

void UCanvas::K2_Deproject(FVector2D ScreenPosition, FVector& WorldOrigin, FVector& WorldDirection) {
}

UCanvas::UCanvas() {
    this->OrgX = 0.00f;
    this->OrgY = 0.00f;
    this->ClipX = 0.00f;
    this->ClipY = 0.00f;
    this->bCenterX = false;
    this->bCenterY = false;
    this->bNoSmooth = false;
    this->SizeX = 0;
    this->SizeY = 0;
    this->ReporterGraph = NULL;
}

