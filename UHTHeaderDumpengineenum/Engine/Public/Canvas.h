#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CanvasUVTri.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EBlendMode.h"
#include "Canvas.generated.h"

class UReporterGraph;
class UFont;
class UTexture2D;
class UTexture;
class UMaterialInterface;

UCLASS(BlueprintType, Transient)
class ENGINE_API UCanvas : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    float OrgX;
    
    UPROPERTY()
    float OrgY;
    
    UPROPERTY()
    float ClipX;
    
    UPROPERTY()
    float ClipY;
    
    UPROPERTY()
    FColor DrawColor;
    
    UPROPERTY()
    uint8 bCenterX: 1;
    
    UPROPERTY()
    uint8 bCenterY: 1;
    
    UPROPERTY()
    uint8 bNoSmooth: 1;
    
    UPROPERTY()
    int32 SizeX;
    
    UPROPERTY()
    int32 SizeY;
    
    UPROPERTY()
    FPlane ColorModulate;
    
    UPROPERTY()
    UTexture2D* DefaultTexture;
    
    UPROPERTY()
    UTexture2D* GradientTexture0;
    
    UPROPERTY()
    UReporterGraph* ReporterGraph;
    
    UCanvas();
    UFUNCTION(BlueprintCallable)
    FVector2D K2_TextSize(UFont* RenderFont, const FString& RenderText, FVector2D Scale);
    
    UFUNCTION(BlueprintCallable)
    FVector2D K2_StrLen(UFont* RenderFont, const FString& RenderText);
    
    UFUNCTION(BlueprintCallable)
    FVector K2_Project(FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void K2_DrawTriangle(UTexture* RenderTexture, TArray<FCanvasUVTri> Triangles);
    
    UFUNCTION(BlueprintCallable)
    void K2_DrawTexture(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, TEnumAsByte<EBlendMode> BlendMode, float Rotation, FVector2D PivotPoint);
    
    UFUNCTION(BlueprintCallable)
    void K2_DrawText(UFont* RenderFont, const FString& RenderText, FVector2D ScreenPosition, FVector2D Scale, FLinearColor RenderColor, float Kerning, FLinearColor ShadowColor, FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, FLinearColor OutlineColor);
    
    UFUNCTION(BlueprintCallable)
    void K2_DrawPolygon(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D Radius, int32 NumberOfSides, FLinearColor RenderColor);
    
    UFUNCTION(BlueprintCallable)
    void K2_DrawMaterialTriangle(UMaterialInterface* RenderMaterial, TArray<FCanvasUVTri> Triangles);
    
    UFUNCTION(BlueprintCallable)
    void K2_DrawMaterial(UMaterialInterface* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint);
    
    UFUNCTION(BlueprintCallable)
    void K2_DrawLine(FVector2D ScreenPositionA, FVector2D ScreenPositionB, float Thickness, FLinearColor RenderColor);
    
    UFUNCTION(BlueprintCallable)
    void K2_DrawBox(FVector2D ScreenPosition, FVector2D ScreenSize, float Thickness, FLinearColor RenderColor);
    
    UFUNCTION(BlueprintCallable)
    void K2_DrawBorder(UTexture* BorderTexture, UTexture* BackgroundTexture, UTexture* LeftBorderTexture, UTexture* RightBorderTexture, UTexture* TopBorderTexture, UTexture* BottomBorderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, FVector2D BorderScale, FVector2D BackgroundScale, float Rotation, FVector2D PivotPoint, FVector2D CornerSize);
    
    UFUNCTION(BlueprintCallable)
    void K2_Deproject(FVector2D ScreenPosition, FVector& WorldOrigin, FVector& WorldDirection);
    
};

