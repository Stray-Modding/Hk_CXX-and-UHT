#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EditedDocumentInfo.generated.h"

class UObject;

USTRUCT()
struct FEditedDocumentInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSoftObjectPath EditedObjectPath;
    
    UPROPERTY()
    FVector2D SavedViewOffset;
    
    UPROPERTY()
    float SavedZoomAmount;
    
private:
    UPROPERTY()
    UObject* EditedObject;
    
public:
    ENGINE_API FEditedDocumentInfo();
};

