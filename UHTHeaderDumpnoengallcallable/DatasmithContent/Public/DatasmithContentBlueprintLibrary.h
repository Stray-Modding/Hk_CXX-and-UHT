#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DatasmithContentBlueprintLibrary.generated.h"

class UDatasmithAssetUserData;
class UObject;

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDatasmithContentBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static FString GetDatasmithUserDataValueForKey(UObject* Object, FName Key);
    
    UFUNCTION(BlueprintCallable)
    static void GetDatasmithUserDataKeysAndValuesForValue(UObject* Object, const FString& StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues);
    
    UFUNCTION(BlueprintCallable)
    static UDatasmithAssetUserData* GetDatasmithUserData(UObject* Object);
    
};

