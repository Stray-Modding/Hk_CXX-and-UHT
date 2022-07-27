#include "KismetRenderingLibrary.h"

class UPrimitiveComponent;
class UTextureRenderTarget2D;
class UTexture2D;
class UCanvas;
class UObject;
class UMaterialInterface;
class UTextureRenderTargetVolume;
class UTextureRenderTarget2DArray;

void UKismetRenderingLibrary::SetCastInsetShadowForAllAttachments(UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup) {
}

UTexture2D* UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly(UTextureRenderTarget2D* RenderTarget, const FString& Name, TEnumAsByte<TextureCompressionSettings> CompressionSettings, TEnumAsByte<TextureMipGenSettings> MipSettings) {
    return NULL;
}

void UKismetRenderingLibrary::ReleaseRenderTarget2D(UTextureRenderTarget2D* TextureRenderTarget) {
}

FColor UKismetRenderingLibrary::ReadRenderTargetUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V) {
    return FColor{};
}

FLinearColor UKismetRenderingLibrary::ReadRenderTargetRawUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V) {
    return FLinearColor{};
}

FLinearColor UKismetRenderingLibrary::ReadRenderTargetRawPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32 X, int32 Y) {
    return FLinearColor{};
}

FColor UKismetRenderingLibrary::ReadRenderTargetPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32 X, int32 Y) {
    return FColor{};
}

FSkelMeshSkinWeightInfo UKismetRenderingLibrary::MakeSkinWeightInfo(int32 Bone0, uint8 Weight0, int32 Bone1, uint8 Weight1, int32 Bone2, uint8 Weight2, int32 Bone3, uint8 Weight3) {
    return FSkelMeshSkinWeightInfo{};
}

UTexture2D* UKismetRenderingLibrary::ImportFileAsTexture2D(UObject* WorldContextObject, const FString& Filename) {
    return NULL;
}

UTexture2D* UKismetRenderingLibrary::ImportBufferAsTexture2D(UObject* WorldContextObject, const TArray<uint8>& Buffer) {
    return NULL;
}

void UKismetRenderingLibrary::ExportTexture2D(UObject* WorldContextObject, UTexture2D* Texture, const FString& FilePath, const FString& Filename) {
}

void UKismetRenderingLibrary::ExportRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, const FString& FilePath, const FString& Filename) {
}

void UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(UObject* WorldContextObject, const FDrawToRenderTargetContext& Context) {
}

void UKismetRenderingLibrary::DrawMaterialToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UMaterialInterface* Material) {
}

UTextureRenderTargetVolume* UKismetRenderingLibrary::CreateRenderTargetVolume(UObject* WorldContextObject, int32 Width, int32 Height, int32 Depth, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps) {
    return NULL;
}

UTextureRenderTarget2DArray* UKismetRenderingLibrary::CreateRenderTarget2DArray(UObject* WorldContextObject, int32 Width, int32 Height, int32 Slices, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps) {
    return NULL;
}

UTextureRenderTarget2D* UKismetRenderingLibrary::CreateRenderTarget2D(UObject* WorldContextObject, int32 Width, int32 Height, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps) {
    return NULL;
}

void UKismetRenderingLibrary::ConvertRenderTargetToTexture2DEditorOnly(UObject* WorldContextObject, UTextureRenderTarget2D* RenderTarget, UTexture2D* Texture) {
}

void UKismetRenderingLibrary::ClearRenderTarget2D(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FLinearColor ClearColor) {
}

void UKismetRenderingLibrary::BreakSkinWeightInfo(FSkelMeshSkinWeightInfo InWeight, int32& Bone0, uint8& Weight0, int32& Bone1, uint8& Weight1, int32& Bone2, uint8& Weight2, int32& Bone3, uint8& Weight3) {
}

void UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UCanvas*& Canvas, FVector2D& Size, FDrawToRenderTargetContext& Context) {
}

UKismetRenderingLibrary::UKismetRenderingLibrary() {
}

