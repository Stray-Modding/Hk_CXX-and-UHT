#include "BandwidthTestActor.h"
#include "Net/UnrealNetwork.h"

void ABandwidthTestActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABandwidthTestActor, BandwidthGenerator);
}

ABandwidthTestActor::ABandwidthTestActor() {
}

