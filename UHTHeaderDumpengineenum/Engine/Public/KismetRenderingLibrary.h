#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "TextureMipGenSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "TextureCompressionSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SkelMeshSkinWeightInfo.h"
#include "DrawToRenderTargetContext.h"
#include "ETextureRenderTargetFormat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "KismetRenderingLibrary.generated.h"

class UTextureRenderTarget2DArray;
class UPrimitiveComponent;
class UTexture2D;
class UTextureRenderTarget2D;
class UCanvas;
class UObject;
class UMaterialInterface;
class UTextureRenderTargetVolume;

UCLASS(BlueprintType, MinimalAPI)
class UKismetRenderingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetRenderingLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetCastInsetShadowForAllAttachments(UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(UTextureRenderTarget2D* RenderTarget, const FString& Name, TEnumAsByte<TextureCompressionSettings> CompressionSettings, TEnumAsByte<TextureMipGenSettings> MipSettings);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseRenderTarget2D(UTextureRenderTarget2D* TextureRenderTarget);
    
    UFUNCTION(BlueprintCallable)
    static FColor ReadRenderTargetUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor ReadRenderTargetRawUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor ReadRenderTargetRawPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable)
    static FColor ReadRenderTargetPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32 X, int32 Y);
    
    UFUNCTION(BlueprintPure)
    static FSkelMeshSkinWeightInfo MakeSkinWeightInfo(int32 Bone0, uint8 Weight0, int32 Bone1, uint8 Weight1, int32 Bone2, uint8 Weight2, int32 Bone3, uint8 Weight3);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* ImportFileAsTexture2D(UObject* WorldContextObject, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* ImportBufferAsTexture2D(UObject* WorldContextObject, const TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable)
    static void ExportTexture2D(UObject* WorldContextObject, UTexture2D* Texture, const FString& FilePath, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static void ExportRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, const FString& FilePath, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static void EndDrawCanvasToRenderTarget(UObject* WorldContextObject, const FDrawToRenderTargetContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static void DrawMaterialToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    static UTextureRenderTargetVolume* CreateRenderTargetVolume(UObject* WorldContextObject, int32 Width, int32 Height, int32 Depth, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);
    
    UFUNCTION(BlueprintCallable)
    static UTextureRenderTarget2DArray* CreateRenderTarget2DArray(UObject* WorldContextObject, int32 Width, int32 Height, int32 Slices, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);
    
    UFUNCTION(BlueprintCallable)
    static UTextureRenderTarget2D* CreateRenderTarget2D(UObject* WorldContextObject, int32 Width, int32 Height, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertRenderTargetToTexture2DEditorOnly(UObject* WorldContextObject, UTextureRenderTarget2D* RenderTarget, UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void ClearRenderTarget2D(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FLinearColor ClearColor);
    
    UFUNCTION(BlueprintPure)
    static void BreakSkinWeightInfo(FSkelMeshSkinWeightInfo InWeight, int32& Bone0, uint8& Weight0, int32& Bone1, uint8& Weight1, int32& Bone2, uint8& Weight2, int32& Bone3, uint8& Weight3);
    
    UFUNCTION(BlueprintCallable)
    static void BeginDrawCanvasToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UCanvas*& Canvas, FVector2D& Size, FDrawToRenderTargetContext& Context);
    
};

