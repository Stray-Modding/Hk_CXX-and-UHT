#pragma once
#include "CoreMinimal.h"
#include "PacketSimulationSettings.generated.h"

USTRUCT()
struct ENGINE_API FPacketSimulationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 PktLoss;
    
    UPROPERTY(EditAnywhere)
    int32 PktLossMaxSize;
    
    UPROPERTY(EditAnywhere)
    int32 PktLossMinSize;
    
    UPROPERTY(EditAnywhere)
    int32 PktOrder;
    
    UPROPERTY(EditAnywhere)
    int32 PktDup;
    
    UPROPERTY(EditAnywhere)
    int32 PktLag;
    
    UPROPERTY(EditAnywhere)
    int32 PktLagVariance;
    
    UPROPERTY(EditAnywhere)
    int32 PktLagMin;
    
    UPROPERTY(EditAnywhere)
    int32 PktLagMax;
    
    UPROPERTY(EditAnywhere)
    int32 PktIncomingLagMin;
    
    UPROPERTY(EditAnywhere)
    int32 PktIncomingLagMax;
    
    UPROPERTY(EditAnywhere)
    int32 PktIncomingLoss;
    
    UPROPERTY(EditAnywhere)
    int32 PktJitter;
    
    FPacketSimulationSettings();
};

