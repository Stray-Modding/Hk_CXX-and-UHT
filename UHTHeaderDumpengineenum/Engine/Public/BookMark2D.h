#pragma once
#include "CoreMinimal.h"
#include "BookmarkBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "BookMark2D.generated.h"

UCLASS()
class ENGINE_API UBookMark2D : public UBookmarkBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Zoom2D;
    
    UPROPERTY(EditAnywhere)
    FIntPoint Location;
    
    UBookMark2D();
};

