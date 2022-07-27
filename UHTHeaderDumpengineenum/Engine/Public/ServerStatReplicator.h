#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "ServerStatReplicator.generated.h"

UCLASS()
class ENGINE_API AServerStatReplicator : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUpdateStatNet;
    
    UPROPERTY(EditAnywhere)
    bool bOverwriteClientStats;
    
    UPROPERTY(Replicated)
    uint32 Channels;
    
    UPROPERTY(Replicated)
    uint32 InRate;
    
    UPROPERTY(Replicated)
    uint32 OutRate;
    
    UPROPERTY(Replicated)
    uint32 MaxPacketOverhead;
    
    UPROPERTY(Replicated)
    uint32 InRateClientMax;
    
    UPROPERTY(Replicated)
    uint32 InRateClientMin;
    
    UPROPERTY(Replicated)
    uint32 InRateClientAvg;
    
    UPROPERTY(Replicated)
    uint32 InPacketsClientMax;
    
    UPROPERTY(Replicated)
    uint32 InPacketsClientMin;
    
    UPROPERTY(Replicated)
    uint32 InPacketsClientAvg;
    
    UPROPERTY(Replicated)
    uint32 OutRateClientMax;
    
    UPROPERTY(Replicated)
    uint32 OutRateClientMin;
    
    UPROPERTY(Replicated)
    uint32 OutRateClientAvg;
    
    UPROPERTY(Replicated)
    uint32 OutPacketsClientMax;
    
    UPROPERTY(Replicated)
    uint32 OutPacketsClientMin;
    
    UPROPERTY(Replicated)
    uint32 OutPacketsClientAvg;
    
    UPROPERTY(Replicated)
    uint32 NetNumClients;
    
    UPROPERTY(Replicated)
    uint32 InPackets;
    
    UPROPERTY(Replicated)
    uint32 OutPackets;
    
    UPROPERTY(Replicated)
    uint32 InBunches;
    
    UPROPERTY(Replicated)
    uint32 OutBunches;
    
    UPROPERTY(Replicated)
    uint32 OutLoss;
    
    UPROPERTY(Replicated)
    uint32 InLoss;
    
    UPROPERTY(Replicated)
    uint32 VoiceBytesSent;
    
    UPROPERTY(Replicated)
    uint32 VoiceBytesRecv;
    
    UPROPERTY(Replicated)
    uint32 VoicePacketsSent;
    
    UPROPERTY(Replicated)
    uint32 VoicePacketsRecv;
    
    UPROPERTY(Replicated)
    uint32 PercentInVoice;
    
    UPROPERTY(Replicated)
    uint32 PercentOutVoice;
    
    UPROPERTY(Replicated)
    uint32 NumActorChannels;
    
    UPROPERTY(Replicated)
    uint32 NumConsideredActors;
    
    UPROPERTY(Replicated)
    uint32 PrioritizedActors;
    
    UPROPERTY(Replicated)
    uint32 NumRelevantActors;
    
    UPROPERTY(Replicated)
    uint32 NumRelevantDeletedActors;
    
    UPROPERTY(Replicated)
    uint32 NumReplicatedActorAttempts;
    
    UPROPERTY(Replicated)
    uint32 NumReplicatedActors;
    
    UPROPERTY(Replicated)
    uint32 NumActors;
    
    UPROPERTY(Replicated)
    uint32 NumNetActors;
    
    UPROPERTY(Replicated)
    uint32 NumDormantActors;
    
    UPROPERTY(Replicated)
    uint32 NumInitiallyDormantActors;
    
    UPROPERTY(Replicated)
    uint32 NumNetGUIDsAckd;
    
    UPROPERTY(Replicated)
    uint32 NumNetGUIDsPending;
    
    UPROPERTY(Replicated)
    uint32 NumNetGUIDsUnAckd;
    
    UPROPERTY(Replicated)
    uint32 ObjPathBytes;
    
    UPROPERTY(Replicated)
    uint32 NetGUIDOutRate;
    
    UPROPERTY(Replicated)
    uint32 NetGUIDInRate;
    
    UPROPERTY(Replicated)
    uint32 NetSaturated;
    
    AServerStatReplicator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

