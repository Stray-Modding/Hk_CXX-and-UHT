#include "ServerStatReplicator.h"
#include "Net/UnrealNetwork.h"

void AServerStatReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AServerStatReplicator, Channels);
    DOREPLIFETIME(AServerStatReplicator, InRate);
    DOREPLIFETIME(AServerStatReplicator, OutRate);
    DOREPLIFETIME(AServerStatReplicator, MaxPacketOverhead);
    DOREPLIFETIME(AServerStatReplicator, InRateClientMax);
    DOREPLIFETIME(AServerStatReplicator, InRateClientMin);
    DOREPLIFETIME(AServerStatReplicator, InRateClientAvg);
    DOREPLIFETIME(AServerStatReplicator, InPacketsClientMax);
    DOREPLIFETIME(AServerStatReplicator, InPacketsClientMin);
    DOREPLIFETIME(AServerStatReplicator, InPacketsClientAvg);
    DOREPLIFETIME(AServerStatReplicator, OutRateClientMax);
    DOREPLIFETIME(AServerStatReplicator, OutRateClientMin);
    DOREPLIFETIME(AServerStatReplicator, OutRateClientAvg);
    DOREPLIFETIME(AServerStatReplicator, OutPacketsClientMax);
    DOREPLIFETIME(AServerStatReplicator, OutPacketsClientMin);
    DOREPLIFETIME(AServerStatReplicator, OutPacketsClientAvg);
    DOREPLIFETIME(AServerStatReplicator, NetNumClients);
    DOREPLIFETIME(AServerStatReplicator, InPackets);
    DOREPLIFETIME(AServerStatReplicator, OutPackets);
    DOREPLIFETIME(AServerStatReplicator, InBunches);
    DOREPLIFETIME(AServerStatReplicator, OutBunches);
    DOREPLIFETIME(AServerStatReplicator, OutLoss);
    DOREPLIFETIME(AServerStatReplicator, InLoss);
    DOREPLIFETIME(AServerStatReplicator, VoiceBytesSent);
    DOREPLIFETIME(AServerStatReplicator, VoiceBytesRecv);
    DOREPLIFETIME(AServerStatReplicator, VoicePacketsSent);
    DOREPLIFETIME(AServerStatReplicator, VoicePacketsRecv);
    DOREPLIFETIME(AServerStatReplicator, PercentInVoice);
    DOREPLIFETIME(AServerStatReplicator, PercentOutVoice);
    DOREPLIFETIME(AServerStatReplicator, NumActorChannels);
    DOREPLIFETIME(AServerStatReplicator, NumConsideredActors);
    DOREPLIFETIME(AServerStatReplicator, PrioritizedActors);
    DOREPLIFETIME(AServerStatReplicator, NumRelevantActors);
    DOREPLIFETIME(AServerStatReplicator, NumRelevantDeletedActors);
    DOREPLIFETIME(AServerStatReplicator, NumReplicatedActorAttempts);
    DOREPLIFETIME(AServerStatReplicator, NumReplicatedActors);
    DOREPLIFETIME(AServerStatReplicator, NumActors);
    DOREPLIFETIME(AServerStatReplicator, NumNetActors);
    DOREPLIFETIME(AServerStatReplicator, NumDormantActors);
    DOREPLIFETIME(AServerStatReplicator, NumInitiallyDormantActors);
    DOREPLIFETIME(AServerStatReplicator, NumNetGUIDsAckd);
    DOREPLIFETIME(AServerStatReplicator, NumNetGUIDsPending);
    DOREPLIFETIME(AServerStatReplicator, NumNetGUIDsUnAckd);
    DOREPLIFETIME(AServerStatReplicator, ObjPathBytes);
    DOREPLIFETIME(AServerStatReplicator, NetGUIDOutRate);
    DOREPLIFETIME(AServerStatReplicator, NetGUIDInRate);
    DOREPLIFETIME(AServerStatReplicator, NetSaturated);
}

AServerStatReplicator::AServerStatReplicator() {
    this->bUpdateStatNet = true;
    this->bOverwriteClientStats = true;
    this->Channels = 0;
    this->InRate = 0;
    this->OutRate = 0;
    this->MaxPacketOverhead = 0;
    this->InRateClientMax = 0;
    this->InRateClientMin = 0;
    this->InRateClientAvg = 0;
    this->InPacketsClientMax = 0;
    this->InPacketsClientMin = 0;
    this->InPacketsClientAvg = 0;
    this->OutRateClientMax = 0;
    this->OutRateClientMin = 0;
    this->OutRateClientAvg = 0;
    this->OutPacketsClientMax = 0;
    this->OutPacketsClientMin = 0;
    this->OutPacketsClientAvg = 0;
    this->NetNumClients = 0;
    this->InPackets = 0;
    this->OutPackets = 0;
    this->InBunches = 0;
    this->OutBunches = 0;
    this->OutLoss = 0;
    this->InLoss = 0;
    this->VoiceBytesSent = 0;
    this->VoiceBytesRecv = 0;
    this->VoicePacketsSent = 0;
    this->VoicePacketsRecv = 0;
    this->PercentInVoice = 0;
    this->PercentOutVoice = 0;
    this->NumActorChannels = 0;
    this->NumConsideredActors = 0;
    this->PrioritizedActors = 0;
    this->NumRelevantActors = 0;
    this->NumRelevantDeletedActors = 0;
    this->NumReplicatedActorAttempts = 0;
    this->NumReplicatedActors = 0;
    this->NumActors = 0;
    this->NumNetActors = 0;
    this->NumDormantActors = 0;
    this->NumInitiallyDormantActors = 0;
    this->NumNetGUIDsAckd = 0;
    this->NumNetGUIDsPending = 0;
    this->NumNetGUIDsUnAckd = 0;
    this->ObjPathBytes = 0;
    this->NetGUIDOutRate = 0;
    this->NetGUIDInRate = 0;
    this->NetSaturated = 0;
}

