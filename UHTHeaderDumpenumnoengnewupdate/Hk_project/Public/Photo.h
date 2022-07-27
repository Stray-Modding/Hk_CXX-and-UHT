#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Photo.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UPhoto : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FText> ScannedNames;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Texture;
    
    UPhoto();
};

