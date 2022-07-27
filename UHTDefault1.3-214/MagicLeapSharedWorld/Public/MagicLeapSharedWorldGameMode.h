#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "MagicLeapSharedWorldSharedData.h"
#include "MagicLeapSharedWorldGameMode.generated.h"

class AMagicLeapSharedWorldPlayerController;

UCLASS(NonTransient)
class MAGICLEAPSHAREDWORLD_API AMagicLeapSharedWorldGameMode : public AGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMagicLeapOnNewLocalDataFromClients);
    
    UPROPERTY(BlueprintReadWrite)
    FMagicLeapSharedWorldSharedData SharedWorldData;
    
    UPROPERTY(BlueprintAssignable)
    FMagicLeapOnNewLocalDataFromClients OnNewLocalDataFromClients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PinSelectionConfidenceThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite)
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

