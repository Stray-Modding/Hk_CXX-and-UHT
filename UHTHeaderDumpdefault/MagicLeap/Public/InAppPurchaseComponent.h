#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PurchaseConfirmation.h"
#include "PurchaseItemDetails.h"
#include "InAppPurchaseComponent.generated.h"

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAGICLEAP_API UInAppPurchaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPurchaseConfirmationSuccess, const FPurchaseConfirmation&, PurchaseConfirmations);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPurchaseConfirmationFailure);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInAppPurchaseLogMessage, const FString&, LogMessage);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetPurchaseHistorySuccess, const TArray<FPurchaseConfirmation>&, PurchaseHistory);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGetPurchaseHistoryFailure);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetItemsDetailsSuccess, const TArray<FPurchaseItemDetails>&, ItemsDetails);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGetItemsDetailsFailure);
    
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseLogMessage InAppPurchaseLogMessage;
    
    UPROPERTY(BlueprintAssignable)
    FGetItemsDetailsSuccess GetItemsDetailsSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FGetItemsDetailsFailure GetItemsDetailsFailure;
    
    UPROPERTY(BlueprintAssignable)
    FPurchaseConfirmationSuccess PurchaseConfirmationSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FPurchaseConfirmationFailure PurchaseConfirmationFailure;
    
    UPROPERTY(BlueprintAssignable)
    FGetPurchaseHistorySuccess GetPurchaseHistorySuccess;
    
    UPROPERTY(BlueprintAssignable)
    FGetPurchaseHistoryFailure GetPurchaseHistoryFailure;
    
    UInAppPurchaseComponent();
    UFUNCTION(BlueprintCallable)
    bool TryPurchaseItemAsync(const FPurchaseItemDetails& ItemDetails);
    
    UFUNCTION(BlueprintCallable)
    bool TryGetPurchaseHistoryAsync(int32 InNumPages);
    
    UFUNCTION(BlueprintCallable)
    bool TryGetItemsDetailsAsync(const TArray<FString>& ItemIDs);
    
};

