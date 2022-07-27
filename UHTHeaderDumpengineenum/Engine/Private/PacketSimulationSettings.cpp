#include "PacketSimulationSettings.h"

FPacketSimulationSettings::FPacketSimulationSettings() {
    this->PktLoss = 0;
    this->PktLossMaxSize = 0;
    this->PktLossMinSize = 0;
    this->PktOrder = 0;
    this->PktDup = 0;
    this->PktLag = 0;
    this->PktLagVariance = 0;
    this->PktLagMin = 0;
    this->PktLagMax = 0;
    this->PktIncomingLagMin = 0;
    this->PktIncomingLagMax = 0;
    this->PktIncomingLoss = 0;
    this->PktJitter = 0;
}

