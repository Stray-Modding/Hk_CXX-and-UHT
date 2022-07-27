#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VariantDependency.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Variant.generated.h"

class ULevelVariantSets;
class UVariantObjectBinding;
class UTexture2D;
class UVariant;
class UVariantSet;
class AActor;

UCLASS(BlueprintType)
class VARIANTMANAGERCONTENT_API UVariant : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FVariantDependency> Dependencies;
    
    UPROPERTY()
    FText DisplayText;
    
    UPROPERTY(Export)
    TArray<UVariantObjectBinding*> ObjectBindings;
    
    UPROPERTY()
    UTexture2D* Thumbnail;
    
public:
    UVariant();
    UFUNCTION(BlueprintCallable)
    void SwitchOn();
    
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
    
    UFUNCTION()
    void SetDependency(int32 Index, FVariantDependency& Dependency);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetThumbnail();
    
    UFUNCTION(BlueprintPure)
    UVariantSet* GetParent();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumDependencies();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumActors();
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayText() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UVariant*> GetDependents(ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);
    
    UFUNCTION(BlueprintPure)
    FVariantDependency GetDependency(int32 Index);
    
    UFUNCTION(BlueprintPure)
    AActor* GetActor(int32 ActorIndex);
    
    UFUNCTION()
    void DeleteDependency(int32 Index);
    
    UFUNCTION()
    int32 AddDependency(FVariantDependency& Dependency);
    
};

