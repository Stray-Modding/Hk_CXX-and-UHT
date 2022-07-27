#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "DatasmithAssetUserData.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, VisibleAnywhere)
    TMap<FName, FString> MetaData;
    
    UDatasmithAssetUserData();
};

