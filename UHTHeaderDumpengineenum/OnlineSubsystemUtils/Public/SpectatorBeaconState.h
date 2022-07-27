#pragma once
#include "CoreMinimal.h"
#include "SpectatorReservation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SpectatorBeaconState.generated.h"

UCLASS(NotPlaceable, Transient)
class ONLINESUBSYSTEMUTILS_API USpectatorBeaconState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FName SessionName;
    
    UPROPERTY(Transient)
    int32 NumConsumedReservations;
    
    UPROPERTY(Transient)
    int32 MaxReservations;
    
    UPROPERTY(Config)
    bool bRestrictCrossConsole;
    
    UPROPERTY(Transient)
    TArray<FSpectatorReservation> Reservations;
    
public:
    USpectatorBeaconState();
};

