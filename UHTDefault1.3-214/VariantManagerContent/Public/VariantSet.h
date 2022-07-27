#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "VariantSet.generated.h"

class UVariant;
class UTexture2D;
class ULevelVariantSets;

UCLASS(BlueprintType)
class VARIANTMANAGERCONTENT_API UVariantSet : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FText DisplayText;
    
    UPROPERTY()
    bool bExpanded;
    
    UPROPERTY()
    TArray<UVariant*> Variants;
    
    UPROPERTY()
    UTexture2D* Thumbnail;
    
public:
    UVariantSet();
    UFUNCTION(BlueprintCallable)
    void SetThumbnailFromTexture(UTexture2D* NewThumbnail);
    
    UFUNCTION(BlueprintCallable)
    void SetThumbnailFromFile(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    void SetThumbnailFromEditorViewport();
    
    UFUNCTION(BlueprintCallable)
    void SetThumbnailFromCamera(UObject* WorldContextObject, const FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayText(const FText& NewDisplayText);
    
    UFUNCTION(BlueprintPure)
    UVariant* GetVariantByName(const FString& VariantName);
    
    UFUNCTION(BlueprintPure)
    UVariant* GetVariant(int32 VariantIndex);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetThumbnail();
    
    UFUNCTION(BlueprintPure)
    ULevelVariantSets* GetParent();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumVariants() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayText() const;
    
};

