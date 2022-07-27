#pragma once
#include "CoreMinimal.h"
#include "PlatformInterfaceBase.h"
#include "ETwitterRequestMethod.h"
#include "TwitterIntegrationBase.generated.h"

UCLASS(NonTransient)
class UTwitterIntegrationBase : public UPlatformInterfaceBase {
    GENERATED_BODY()
public:
    UTwitterIntegrationBase();
    UFUNCTION()
    bool TwitterRequest(const FString& URL, const TArray<FString>& ParamKeysAndValues, TEnumAsByte<ETwitterRequestMethod> RequestMethod, int32 AccountIndex);
    
    UFUNCTION()
    bool ShowTweetUI(const FString& InitialMessage, const FString& URL, const FString& Picture);
    
    UFUNCTION()
    void Init();
    
    UFUNCTION()
    int32 GetNumAccounts();
    
    UFUNCTION()
    FString GetAccountName(int32 AccountIndex);
    
    UFUNCTION()
    bool CanShowTweetUI();
    
    UFUNCTION()
    bool AuthorizeAccounts();
    
};

