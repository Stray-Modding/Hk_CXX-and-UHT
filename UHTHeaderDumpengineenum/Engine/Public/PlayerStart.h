#pragma once
#include "CoreMinimal.h"
#include "NavigationObjectBase.h"
#include "PlayerStart.generated.h"

UCLASS()
class ENGINE_API APlayerStart : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PlayerStartTag;
    
    APlayerStart();
};

