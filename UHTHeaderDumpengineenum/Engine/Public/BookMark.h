#pragma once
#include "CoreMinimal.h"
#include "BookmarkBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "BookMark.generated.h"

UCLASS(MinimalAPI)
class UBookMark : public UBookmarkBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> HiddenLevels;
    
    UBookMark();
};

