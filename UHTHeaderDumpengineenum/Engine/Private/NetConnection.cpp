#include "NetConnection.h"
#include "PackageMapClient.h"

UNetConnection::UNetConnection() {
    this->Driver = NULL;
    this->PackageMapClass = UPackageMapClient::StaticClass();
    this->PackageMap = NULL;
    this->ViewTarget = NULL;
    this->OwningActor = NULL;
    this->MaxPacket = 0;
    this->InternalAck = false;
    this->LastReceiveTime = 0.00f;
}

