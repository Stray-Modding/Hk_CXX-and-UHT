#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "MagicLeapSharedWorldSharedData.h"
#include "MagicLeapSharedWorldGameMode.generated.h"

class AMagicLeapSharedWorldPlayerController;

UCLASS(Blueprintable, NonTransient)
class MAGICLEAPSHAREDWORLD_API AMagicLeapSharedWorldGameMode : public AGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMagicLeapOnNewLocalDataFromClients);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapSharedWorldSharedData SharedWorldData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagicLeapOnNewLocalDataFromClients OnNewLocalDataFromClients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PinSelectionConfidenceThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMagicLeapSharedWorldPlayerController* ChosenOne;
    
public:
    AMagicLeapSharedWorldGameMode();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SendSharedWorldDataToClients();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void SelectChosenOne();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData);
    
};

