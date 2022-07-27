#pragma once
#include "CoreMinimal.h"
#include "StartData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerStart -FallbackName=PlayerStart
#include "HKPlayerStart.generated.h"

class ACatPawn;

UCLASS()
class HK_PROJECT_API AHKPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseData;
    
    UPROPERTY(EditAnywhere)
    FStartData StartData;
    
    AHKPlayerStart();
    UFUNCTION(BlueprintNativeEvent)
    void BeforeCatSpawned();
    
    UFUNCTION(BlueprintNativeEvent)
    void AfterCatSpawned(ACatPawn* _cat);
    
};

