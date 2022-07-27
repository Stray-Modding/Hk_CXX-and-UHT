#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "SaveGameDataAsset.generated.h"

class UHKSaveGame;

UCLASS(Blueprintable)
class HK_PROJECT_API USaveGameDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString saveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHKSaveGame* SaveGame;
    
    USaveGameDataAsset();
    UFUNCTION(BlueprintCallable)
    void ImportSave();
    
};

